/*************************************************/
/* START of PME_SPMD */
#include <au/edu/anu/pme/PME_SPMD.h>

#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME_SPMD__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_double>::itable<au_edu_anu_pme_PME_SPMD__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(x10_long i){
        ::x10x::vector::Vector3d this__59008 = ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                 i);
        return ::x10::lang::MathNatives::sqrt(((((((this__59008->FMGL(i)) * (this__59008->FMGL(i)))) + (((this__59008->FMGL(j)) * (this__59008->FMGL(j)))))) + (((this__59008->FMGL(k)) * (this__59008->FMGL(k))))));
        
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
        au_edu_anu_pme_PME_SPMD__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edges = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        au_edu_anu_pme_PME_SPMD__closure__1* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__1(that_edges);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__1(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges) : edges(edges) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:158";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME_SPMD__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d>::itable<au_edu_anu_pme_PME_SPMD__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10x::vector::Vector3d __apply(x10_long i){
        ::x10x::vector::Vector3d this__59014 = ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                 i);
        
        //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d ret__59015;
        
        //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        x10_double l__59012 = ((((((this__59014->FMGL(i)) * (this__59014->FMGL(i)))) + (((this__59014->FMGL(j)) * (this__59014->FMGL(j)))))) + (((this__59014->FMGL(k)) * (this__59014->FMGL(k)))));
        
        //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ret__59015 = (__extension__ ({
            ::x10x::vector::Vector3d alloc__59013 =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double i__59009 = ((this__59014->FMGL(i)) / (l__59012));
            x10_double j__59010 = ((this__59014->FMGL(j)) / (l__59012));
            x10_double k__59011 = ((this__59014->FMGL(k)) / (l__59012));
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            alloc__59013->FMGL(i) = i__59009;
            alloc__59013->FMGL(j) = j__59010;
            alloc__59013->FMGL(k) = k__59011;
            alloc__59013;
        }))
        ;
        
        //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ret__59015;
        
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
        au_edu_anu_pme_PME_SPMD__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edges = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        au_edu_anu_pme_PME_SPMD__closure__2* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__2(that_edges);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__2(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges) : edges(edges) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:159";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>::itable<au_edu_anu_pme_PME_SPMD__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::Array< ::x10x::vector::Vector3d>* __apply(){
        
        //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Array< ::x10x::vector::Vector3d>* alloc__59090 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10x::vector::Vector3d> >()) ::x10::regionarray::Array< ::x10x::vector::Vector3d>());
        
        //#line 172 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::Region* reg__59086 = (__extension__ ({
            
            //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
            ::x10::lang::LongRange r__59087 = ::x10::lang::LongRange::_make(((x10_long)-1ll), ((x10_long)1ll));
            ::x10::lang::LongRange r__59088 = ::x10::lang::LongRange::_make(((x10_long)-1ll), ((x10_long)1ll));
            ::x10::lang::LongRange r__59089 = ::x10::lang::LongRange::_make(((x10_long)-1ll), ((x10_long)1ll));
            ::x10::regionarray::Region::makeRectangular(r__59087, r__59088,
                                                        r__59089);
        }))
        ;
        
        //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__59090->FMGL(region) = (reg__59086);
        alloc__59090->FMGL(rank) = ::x10aux::nullCheck(reg__59086)->FMGL(rank);
        alloc__59090->FMGL(rect) = ::x10aux::nullCheck(reg__59086)->FMGL(rect);
        alloc__59090->FMGL(zeroBased) = ::x10aux::nullCheck(reg__59086)->FMGL(zeroBased);
        alloc__59090->FMGL(rail) = ::x10aux::nullCheck(reg__59086)->FMGL(rail);
        alloc__59090->FMGL(size) = ::x10aux::nullCheck(reg__59086)->size();
        
        //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh__59077 =  ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh__59077)->::x10::regionarray::Array__LayoutHelper::_constructor(
          reg__59086);
        
        //#line 176 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__59090->FMGL(layout_min0) = crh__59077->FMGL(min0);
        
        //#line 177 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__59090->FMGL(layout_stride1) = crh__59077->FMGL(stride1);
        
        //#line 178 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__59090->FMGL(layout_min1) = crh__59077->FMGL(min1);
        
        //#line 179 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__59090->FMGL(layout) = crh__59077->FMGL(layout);
        
        //#line 180 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        x10_long n__59078 = crh__59077->FMGL(size);
        
        //#line 181 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* r__59079 = ::x10::lang::Rail< ::x10x::vector::Vector3d >::_makeUnsafe(n__59078, false);
        
        //#line 182 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__59080;
            for (p__59080 = ::x10aux::nullCheck(reg__59086)->iterator(); ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__59080));
                 ) {
                ::x10::lang::Point* p__59081 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__59080));
                
                //#line 183 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                r__59079->x10::lang::Rail< ::x10x::vector::Vector3d >::__set(
                  (__extension__ ({
                      
                      //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      ::x10::lang::Point* pt__59082 = p__59081;
                      x10_long ret__59083;
                      
                      //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      x10_long offset__59043 = ((::x10aux::nullCheck(pt__59082)->x10::lang::Point::__apply(
                                                   ((x10_long)(((x10_int)0))))) - (alloc__59090->FMGL(layout_min0)));
                      
                      //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(pt__59082)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          offset__59043 = ((((((offset__59043) * (alloc__59090->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__59082)->x10::lang::Point::__apply(
                                                                                                             ((x10_long)1ll))))) - (alloc__59090->FMGL(layout_min1)));
                          
                          //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long i__36722max__59040 = ((::x10aux::nullCheck(pt__59082)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__59041;
                              for (i__59041 = ((x10_long)2ll);
                                   ((i__59041) <= (i__36722max__59040));
                                   i__59041 = ((i__59041) + (((x10_long)1ll))))
                              {
                                  x10_long i__59042 = i__59041;
                                  
                                  //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59043 = ((((((offset__59043) * (::x10aux::nullCheck(alloc__59090->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((((x10_long)2ll)) * (((i__59042) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__59082)->x10::lang::Point::__apply(
                                                                                                                                              i__59042)))) - (::x10aux::nullCheck(alloc__59090->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__59042) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      
                      //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      ret__59083 = offset__59043;
                      ret__59083;
                  }))
                  , (__extension__ ({
                      
                      //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                      ::x10::lang::Point* t__59084 = p__59081;
                      ::x10x::vector::Vector3d ret__59085;
                      x10_long i__59059 = ::x10aux::nullCheck(t__59084)->x10::lang::Point::__apply(
                                            ((x10_long)(((x10_int)0))));
                      x10_long j__59060 = ::x10aux::nullCheck(t__59084)->x10::lang::Point::__apply(
                                            ((x10_long)(((x10_int)1))));
                      x10_long k__59061 = ::x10aux::nullCheck(t__59084)->x10::lang::Point::__apply(
                                            ((x10_long)(((x10_int)2))));
                      ret__59085 = (__extension__ ({
                          ::x10x::vector::Vector3d this__59062 =
                            (__extension__ ({
                              ::x10x::vector::Vector3d this__59063 =
                                (__extension__ ({
                                  ::x10x::vector::Vector3d this__59064 =
                                    ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                      ((x10_long)0ll));
                                  
                                  //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double c__59065 = ((x10_double) (i__59059));
                                  (__extension__ ({
                                      
                                      //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      ::x10x::vector::Vector3d alloc__59066 =
                                         ::x10x::vector::Vector3d::_alloc();
                                      
                                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      x10_double i__59044 =
                                        ((this__59064->FMGL(i)) * (c__59065));
                                      x10_double j__59045 =
                                        ((this__59064->FMGL(j)) * (c__59065));
                                      x10_double k__59046 =
                                        ((this__59064->FMGL(k)) * (c__59065));
                                      
                                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      alloc__59066->FMGL(i) =
                                        i__59044;
                                      alloc__59066->FMGL(j) =
                                        j__59045;
                                      alloc__59066->FMGL(k) =
                                        k__59046;
                                      alloc__59066;
                                  }))
                                  ;
                              }))
                              ;
                              
                              //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              ::x10x::vector::Vector3d b__59067 =
                                (__extension__ ({
                                  
                                  //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                  ::x10x::vector::Vector3d this__59068 =
                                    ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                      ((x10_long)1ll));
                                  
                                  //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double c__59069 = ((x10_double) (j__59060));
                                  (__extension__ ({
                                      
                                      //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      ::x10x::vector::Vector3d alloc__59070 =
                                         ::x10x::vector::Vector3d::_alloc();
                                      
                                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      x10_double i__59047 =
                                        ((this__59068->FMGL(i)) * (c__59069));
                                      x10_double j__59048 =
                                        ((this__59068->FMGL(j)) * (c__59069));
                                      x10_double k__59049 =
                                        ((this__59068->FMGL(k)) * (c__59069));
                                      
                                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      alloc__59070->FMGL(i) =
                                        i__59047;
                                      alloc__59070->FMGL(j) =
                                        j__59048;
                                      alloc__59070->FMGL(k) =
                                        k__59049;
                                      alloc__59070;
                                  }))
                                  ;
                              }))
                              ;
                              (__extension__ ({
                                  
                                  //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  ::x10x::vector::Vector3d alloc__59071 =
                                     ::x10x::vector::Vector3d::_alloc();
                                  
                                  //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double i__59050 = ((this__59063->FMGL(i)) + (b__59067->FMGL(i)));
                                  x10_double j__59051 = ((this__59063->FMGL(j)) + (b__59067->FMGL(j)));
                                  x10_double k__59052 = ((this__59063->FMGL(k)) + (b__59067->FMGL(k)));
                                  
                                  //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  alloc__59071->FMGL(i) =
                                    i__59050;
                                  alloc__59071->FMGL(j) =
                                    j__59051;
                                  alloc__59071->FMGL(k) =
                                    k__59052;
                                  alloc__59071;
                              }))
                              ;
                          }))
                          ;
                          
                          //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                          ::x10x::vector::Vector3d b__59072 =
                            (__extension__ ({
                              
                              //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                              ::x10x::vector::Vector3d this__59073 =
                                ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                  ((x10_long)2ll));
                              
                              //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              x10_double c__59074 = ((x10_double) (k__59061));
                              (__extension__ ({
                                  
                                  //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  ::x10x::vector::Vector3d alloc__59075 =
                                     ::x10x::vector::Vector3d::_alloc();
                                  
                                  //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double i__59053 = ((this__59073->FMGL(i)) * (c__59074));
                                  x10_double j__59054 = ((this__59073->FMGL(j)) * (c__59074));
                                  x10_double k__59055 = ((this__59073->FMGL(k)) * (c__59074));
                                  
                                  //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  alloc__59075->FMGL(i) =
                                    i__59053;
                                  alloc__59075->FMGL(j) =
                                    j__59054;
                                  alloc__59075->FMGL(k) =
                                    k__59055;
                                  alloc__59075;
                              }))
                              ;
                          }))
                          ;
                          (__extension__ ({
                              
                              //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              ::x10x::vector::Vector3d alloc__59076 =
                                 ::x10x::vector::Vector3d::_alloc();
                              
                              //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              x10_double i__59056 = ((this__59062->FMGL(i)) + (b__59072->FMGL(i)));
                              x10_double j__59057 = ((this__59062->FMGL(j)) + (b__59072->FMGL(j)));
                              x10_double k__59058 = ((this__59062->FMGL(k)) + (b__59072->FMGL(k)));
                              
                              //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              alloc__59076->FMGL(i) = i__59056;
                              alloc__59076->FMGL(j) = j__59057;
                              alloc__59076->FMGL(k) = k__59058;
                              alloc__59076;
                          }))
                          ;
                      }))
                      ;
                      ret__59085;
                  }))
                  );
            }
        }
        
        //#line 185 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__59090->FMGL(raw) = r__59079;
        
        //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return alloc__59090;
        
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
        au_edu_anu_pme_PME_SPMD__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edges = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        au_edu_anu_pme_PME_SPMD__closure__3* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__3(that_edges);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__3(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges) : edges(edges) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:174-175";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* mySubCellRegion = ::x10aux::nullCheck(subCells->FMGL(dist))->__apply(
                                                        ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        if (!(::x10aux::nullCheck(mySubCellRegion)->isEmpty())) {
            
            //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10::regionarray::Region* directRequiredRegion = (__extension__ ({
                
                //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                ::x10::lang::LongRange r__39000 = ::x10::lang::LongRange::_make(((::x10aux::nullCheck(mySubCellRegion)->min(
                                                                                    ((x10_long)0ll))) - (((x10_long)2ll))), ((::x10aux::nullCheck(mySubCellRegion)->max(
                                                                                                                                ((x10_long)0ll))) + (((x10_long)2ll))));
                ::x10::lang::LongRange r__39001 = ::x10::lang::LongRange::_make(((::x10aux::nullCheck(mySubCellRegion)->min(
                                                                                    ((x10_long)1ll))) - (((x10_long)2ll))), ((::x10aux::nullCheck(mySubCellRegion)->max(
                                                                                                                                ((x10_long)1ll))) + (((x10_long)2ll))));
                ::x10::lang::LongRange r__39002 = ::x10::lang::LongRange::_make(((::x10aux::nullCheck(mySubCellRegion)->min(
                                                                                    ((x10_long)2ll))) - (((x10_long)2ll))), ((::x10aux::nullCheck(mySubCellRegion)->max(
                                                                                                                                ((x10_long)2ll))) + (((x10_long)2ll))));
                ::x10::regionarray::Region::makeRectangular(
                  r__39000, r__39001, r__39002);
            }))
            ;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            atomsCache->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__set(
              p, (__extension__ ({
                  ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* alloc__29161 =
                     (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >()) ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>());
                  
                  //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  ::x10::regionarray::Region* reg__59093 =
                    directRequiredRegion;
                  
                  //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__29161->FMGL(region) = (reg__59093);
                  alloc__29161->FMGL(rank) = ::x10aux::nullCheck(reg__59093)->FMGL(rank);
                  alloc__29161->FMGL(rect) = ::x10aux::nullCheck(reg__59093)->FMGL(rect);
                  alloc__29161->FMGL(zeroBased) = ::x10aux::nullCheck(reg__59093)->FMGL(zeroBased);
                  alloc__29161->FMGL(rail) = ::x10aux::nullCheck(reg__59093)->FMGL(rail);
                  alloc__29161->FMGL(size) = ::x10aux::nullCheck(reg__59093)->size();
                  
                  //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  ::x10::regionarray::Array__LayoutHelper crh__59091 =
                     ::x10::regionarray::Array__LayoutHelper::_alloc();
                  (crh__59091)->::x10::regionarray::Array__LayoutHelper::_constructor(
                    reg__59093);
                  
                  //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__29161->FMGL(layout_min0) = crh__59091->FMGL(min0);
                  
                  //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__29161->FMGL(layout_stride1) = crh__59091->FMGL(stride1);
                  
                  //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__29161->FMGL(layout_min1) = crh__59091->FMGL(min1);
                  
                  //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__29161->FMGL(layout) = crh__59091->FMGL(layout);
                  
                  //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  x10_long n__59092 = crh__59091->FMGL(size);
                  
                  //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__29161->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::_make(n__59092);
                  alloc__29161;
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
        au_edu_anu_pme_PME_SPMD__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__5>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        au_edu_anu_pme_PME_SPMD__closure__5* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__5(that_subCells, that_atomsCache, that_p);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__5(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::lang::Point* p) : subCells(subCells), atomsCache(atomsCache), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:189-198";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__59604;
            for (p__59604 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__59604));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__59604));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__5)))au_edu_anu_pme_PME_SPMD__closure__5(subCells, atomsCache, p))),
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
        au_edu_anu_pme_PME_SPMD__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__4>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME_SPMD__closure__4* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__4(that_subCells, that_atomsCache, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__4(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::regionarray::Dist* __lowerer__var__0__) : subCells(subCells), atomsCache(atomsCache), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:189-198";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class au_edu_anu_pme_PME_SPMD__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double>::itable<au_edu_anu_pme_PME_SPMD__closure__6> _itable;
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
        au_edu_anu_pme_PME_SPMD__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__6>();
        buf.record_reference(storage);
        au_edu_anu_pme_PME_SPMD__closure__6* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__6();
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:226";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__8_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
          ((x10_long)(((x10_int)0))));
        
        //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        saved_this->prefetchPackedAtomsLocal();
        
        //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        saved_this->gridChargesLocal();
        
        //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
          ((x10_long)(((x10_int)2))));
        
        //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::doFFT3d(
          saved_this->FMGL(Q), saved_this->FMGL(Qinv), saved_this->FMGL(temp));
        
        //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 243 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
          ((x10_long)(((x10_int)2))));
        
        //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
          ((x10_long)(((x10_int)3))));
        
        //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Array<x10_double>* localBdotC =
          ::x10aux::nullCheck(saved_this->FMGL(BdotC))->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Array<x10_complex>* localThetaRecConvQ =
          ::x10aux::nullCheck(saved_this->FMGL(thetaRecConvQ))->x10::regionarray::DistArray<x10_complex>::getLocalPortion();
        
        //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Array<x10_complex>* localQinv =
          ::x10aux::nullCheck(saved_this->FMGL(Qinv))->x10::regionarray::DistArray<x10_complex>::getLocalPortion();
        
        //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localBdotC)->FMGL(region);
        
        //#line 772 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_complex>* dst__59131 =
          localThetaRecConvQ;
        ::x10::regionarray::Array<x10_complex>* src__59132 =
          localQinv;
        ::x10::regionarray::Array<x10_complex>* ret__59133;
        goto __ret__59134; __ret__59134: {
        {
            
            //#line 774 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            if ((::x10aux::nullCheck(localBdotC)->FMGL(rect) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(localBdotC)->FMGL(size),
                                         ::x10aux::nullCheck(src__59132)->FMGL(size)))))
            {
                
                //#line 173 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ::x10::lang::Rail< x10_double >* src__59100 =
                  ::x10aux::nullCheck(localBdotC)->FMGL(raw);
                ::x10::lang::Rail< x10_complex >* src__59101 =
                  ::x10aux::nullCheck(src__59132)->FMGL(raw);
                ::x10::lang::Rail< x10_complex >* dst__59102 =
                  ::x10aux::nullCheck(dst__59131)->FMGL(raw);
                ::x10::lang::Rail< x10_complex >* ret__59103;
                
                //#line 178 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ::x10::lang::Rail< x10_double >* rail__59096 =
                  src__59100;
                x10_long i__56659max__59097 = (x10_long)(::x10aux::nullCheck(rail__59096)->FMGL(size));
                {
                    x10_long i__59098;
                    for (i__59098 = ((x10_long)0ll); ((i__59098) < (i__56659max__59097));
                         i__59098 = ((i__59098) + (((x10_long)1ll))))
                    {
                        x10_long i__59099 = i__59098;
                        
                        //#line 179 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                        ::x10aux::nullCheck(dst__59102)->x10::lang::Rail< x10_complex >::__set(
                          i__59099, (__extension__ ({
                              
                              //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                              x10_double a__59094 = ::x10aux::nullCheck(src__59100)->x10::lang::Rail< x10_double >::__apply(
                                                      i__59099);
                              x10_complex b__59095 = ::x10aux::nullCheck(src__59101)->x10::lang::Rail< x10_complex >::__apply(
                                                       i__59099);
                              ::x10::lang::ComplexNatives::_times(a__59094, b__59095);
                          }))
                          );
                    }
                }
                
                //#line 181 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ret__59103 = dst__59102;
                
                //#line 173 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ret__59103;
                
                //#line 779 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__59133 = dst__59131;
                goto __ret__59134_end_;
            } else {
                
                //#line 781 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* p__59135;
                    for (p__59135 = ::x10aux::nullCheck(localBdotC)->FMGL(region)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__59135));
                         ) {
                        ::x10::lang::Point* p__59136 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__59135));
                        
                        //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ::x10::lang::Point* p__59122 = p__59136;
                        x10_complex v__59123 = (__extension__ ({
                            
                            //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_double a__59124 = (__extension__ ({
                                
                                //#line 523 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ::x10::lang::Point* pt__59125 =
                                  p__59136;
                                x10_double ret__59126;
                                
                                //#line 527 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__59126 = ::x10aux::nullCheck(localBdotC)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ::x10::lang::Point* pt__59108 =
                                                     pt__59125;
                                                   x10_long ret__59109;
                                                   
                                                   //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__59107 =
                                                     ((::x10aux::nullCheck(pt__59108)->x10::lang::Point::__apply(
                                                         ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(localBdotC)->FMGL(layout_min0)));
                                                   
                                                   //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   if (((::x10aux::nullCheck(pt__59108)->FMGL(rank)) > (((x10_long)1ll))))
                                                   {
                                                       
                                                       //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__59107 =
                                                         ((((((offset__59107) * (::x10aux::nullCheck(localBdotC)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__59108)->x10::lang::Point::__apply(
                                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(localBdotC)->FMGL(layout_min1)));
                                                       
                                                       //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__36722max__59104 =
                                                         ((::x10aux::nullCheck(pt__59108)->FMGL(rank)) - (((x10_long)1ll)));
                                                       {
                                                           x10_long i__59105;
                                                           for (i__59105 =
                                                                  ((x10_long)2ll);
                                                                ((i__59105) <= (i__36722max__59104));
                                                                i__59105 =
                                                                  ((i__59105) + (((x10_long)1ll))))
                                                           {
                                                               x10_long i__59106 =
                                                                 i__59105;
                                                               
                                                               //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                               offset__59107 =
                                                                 ((((((offset__59107) * (::x10aux::nullCheck(::x10aux::nullCheck(localBdotC)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                           ((((x10_long)2ll)) * (((i__59106) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__59108)->x10::lang::Point::__apply(
                                                                                                                                                             i__59106)))) - (::x10aux::nullCheck(::x10aux::nullCheck(localBdotC)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                               ((((((x10_long)2ll)) * (((i__59106) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                                           }
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__59109 =
                                                     offset__59107;
                                                   ret__59109;
                                               }))
                                               );
                                ret__59126;
                            }))
                            ;
                            x10_complex b__59127 = (__extension__ ({
                                
                                //#line 523 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ::x10::lang::Point* pt__59128 =
                                  p__59136;
                                x10_complex ret__59129;
                                
                                //#line 527 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__59129 = ::x10aux::nullCheck(src__59132)->FMGL(raw)->x10::lang::Rail< x10_complex >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ::x10::lang::Point* pt__59114 =
                                                     pt__59128;
                                                   x10_long ret__59115;
                                                   
                                                   //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__59113 =
                                                     ((::x10aux::nullCheck(pt__59114)->x10::lang::Point::__apply(
                                                         ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src__59132)->FMGL(layout_min0)));
                                                   
                                                   //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   if (((::x10aux::nullCheck(pt__59114)->FMGL(rank)) > (((x10_long)1ll))))
                                                   {
                                                       
                                                       //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__59113 =
                                                         ((((((offset__59113) * (::x10aux::nullCheck(src__59132)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__59114)->x10::lang::Point::__apply(
                                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(src__59132)->FMGL(layout_min1)));
                                                       
                                                       //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__36722max__59110 =
                                                         ((::x10aux::nullCheck(pt__59114)->FMGL(rank)) - (((x10_long)1ll)));
                                                       {
                                                           x10_long i__59111;
                                                           for (i__59111 =
                                                                  ((x10_long)2ll);
                                                                ((i__59111) <= (i__36722max__59110));
                                                                i__59111 =
                                                                  ((i__59111) + (((x10_long)1ll))))
                                                           {
                                                               x10_long i__59112 =
                                                                 i__59111;
                                                               
                                                               //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                               offset__59113 =
                                                                 ((((((offset__59113) * (::x10aux::nullCheck(::x10aux::nullCheck(src__59132)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                           ((((x10_long)2ll)) * (((i__59112) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__59114)->x10::lang::Point::__apply(
                                                                                                                                                             i__59112)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src__59132)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                               ((((((x10_long)2ll)) * (((i__59112) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                                           }
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__59115 =
                                                     offset__59113;
                                                   ret__59115;
                                               }))
                                               );
                                ret__59129;
                            }))
                            ;
                            ::x10::lang::ComplexNatives::_times(a__59124, b__59127);
                        }))
                        ;
                        x10_complex ret__59130;
                        
                        //#line 640 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ::x10aux::nullCheck(dst__59131)->FMGL(raw)->x10::lang::Rail< x10_complex >::__set(
                          (__extension__ ({
                              
                              //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ::x10::lang::Point* pt__59120 =
                                p__59122;
                              x10_long ret__59121;
                              
                              //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long offset__59119 = ((::x10aux::nullCheck(pt__59120)->x10::lang::Point::__apply(
                                                           ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst__59131)->FMGL(layout_min0)));
                              
                              //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              if (((::x10aux::nullCheck(pt__59120)->FMGL(rank)) > (((x10_long)1ll))))
                              {
                                  
                                  //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59119 = ((((((offset__59119) * (::x10aux::nullCheck(dst__59131)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__59120)->x10::lang::Point::__apply(
                                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(dst__59131)->FMGL(layout_min1)));
                                  
                                  //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__36722max__59116 =
                                    ((::x10aux::nullCheck(pt__59120)->FMGL(rank)) - (((x10_long)1ll)));
                                  {
                                      x10_long i__59117;
                                      for (i__59117 = ((x10_long)2ll);
                                           ((i__59117) <= (i__36722max__59116));
                                           i__59117 = ((i__59117) + (((x10_long)1ll))))
                                      {
                                          x10_long i__59118 =
                                            i__59117;
                                          
                                          //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          offset__59119 =
                                            ((((((offset__59119) * (::x10aux::nullCheck(::x10aux::nullCheck(dst__59131)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                      ((((x10_long)2ll)) * (((i__59118) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__59120)->x10::lang::Point::__apply(
                                                                                                                                        i__59118)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst__59131)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                          ((((((x10_long)2ll)) * (((i__59118) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                      }
                                  }
                                  
                              }
                              
                              //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ret__59121 = offset__59119;
                              ret__59121;
                          }))
                          , v__59123);
                        
                        //#line 641 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__59130 = v__59123;
                        
                        //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__59130;
                    }
                }
                
            }
            
            //#line 785 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__59133 = dst__59131;
        }goto __ret__59134_end_; __ret__59134_end_: ;
        }
        ret__59133;
        
        //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::doFFT3d(
          saved_this->FMGL(thetaRecConvQ), saved_this->FMGL(thetaRecConvQReal),
          saved_this->FMGL(temp), saved_this->FMGL(temp2));
        
        //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
          ((x10_long)(((x10_int)3))));
        
        //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_double reciprocalEnergy = saved_this->getReciprocalEnergy(
                                        saved_this->FMGL(thetaRecConvQReal));
        
        //#line 259 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_double selfEnergy = saved_this->getSelfEnergy();
        
        //#line 260 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_double directEnergy = saved_this->getDirectEnergy();
        
        //#line 267 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_double myEnergy = ((((directEnergy) + (reciprocalEnergy))) + (((0.0) + (selfEnergy))));
        
        //#line 269 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
          ((x10_long)(((x10_int)0))));
        
        //#line 270 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_long >(
          ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->FMGL(total),
          ((x10_long)0ll), ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->FMGL(total),
          ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->FMGL(total))->FMGL(size)),
          ((x10_int)6));
        
        //#line 272 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(myEnergy);
        }
        
        // captured environment
        ::au::edu::anu::pme::PME_SPMD* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            au_edu_anu_pme_PME_SPMD__closure__8* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__8>();
            buf.record_reference(storage);
            ::au::edu::anu::pme::PME_SPMD* that_saved_this = buf.read< ::au::edu::anu::pme::PME_SPMD*>();
            au_edu_anu_pme_PME_SPMD__closure__8* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__8(that_saved_this);
            return this_;
        }
        
        au_edu_anu_pme_PME_SPMD__closure__8(::au::edu::anu::pme::PME_SPMD* saved_this) : saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:233-273";
        }
    
    };
    
    #endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__8_CLOSURE
    #ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p1__59622;
            for (p1__59622 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__59622));
                 ) {
                ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__59622));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__8)))au_edu_anu_pme_PME_SPMD__closure__8(saved_this))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::pme::PME_SPMD* saved_this;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME_SPMD__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__7>();
        buf.record_reference(storage);
        ::au::edu::anu::pme::PME_SPMD* that_saved_this = buf.read< ::au::edu::anu::pme::PME_SPMD*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME_SPMD__closure__7* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__7(that_saved_this, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__7(::au::edu::anu::pme::PME_SPMD* saved_this, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:233-273";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__7_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__9_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME_SPMD__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::itable<au_edu_anu_pme_PME_SPMD__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>* __apply(::x10::lang::Point* id__937){
        
        //#line 286 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>* alloc__59137 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>());
        (alloc__59137)->::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>::_constructor();
        return alloc__59137;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME_SPMD__closure__9* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__9>();
        buf.record_reference(storage);
        au_edu_anu_pme_PME_SPMD__closure__9* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__9();
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__9() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:286";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__9_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__12_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            
            //#line 300 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10::lang::CheckedThrowable* throwable__59795 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(subCellsTemp->x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::__apply(
                                              i__59143, j__59144,
                                              k__59145))->add((__extension__ ({
                                                                  ::au::edu::anu::chem::PointCharge alloc__59146 =
                                                                    
                                                                  ::au::edu::anu::chem::PointCharge::_alloc();
                                                                  
                                                                  //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/PointCharge.x10"
                                                                  ::x10x::vector::Point3d centre__59138 =
                                                                    centre__59141;
                                                                  x10_double charge__59139 =
                                                                    charge__59142;
                                                                  
                                                                  //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/PointCharge.x10"
                                                                  alloc__59146->FMGL(centre) =
                                                                    centre__59138;
                                                                  
                                                                  //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/PointCharge.x10"
                                                                  alloc__59146->FMGL(charge) =
                                                                    charge__59139;
                                                                  alloc__59146;
                                                              }))
                                                              );
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc14) {
                {
                    ::x10::lang::CheckedThrowable* formal__59796 =
                      __exc14;
                    {
                        throwable__59795 = formal__59796;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__59795,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__59795))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__59795));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__59795,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__59795)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__59795));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp;
    x10_long i__59143;
    x10_long j__59144;
    x10_long k__59145;
    ::x10x::vector::Point3d centre__59141;
    x10_double charge__59142;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCellsTemp);
        buf.write(this->i__59143);
        buf.write(this->j__59144);
        buf.write(this->k__59145);
        buf.write(this->centre__59141);
        buf.write(this->charge__59142);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME_SPMD__closure__12* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__12>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        x10_long that_i__59143 = buf.read<x10_long>();
        x10_long that_j__59144 = buf.read<x10_long>();
        x10_long that_k__59145 = buf.read<x10_long>();
        ::x10x::vector::Point3d that_centre__59141 = buf.read< ::x10x::vector::Point3d>();
        x10_double that_charge__59142 = buf.read<x10_double>();
        au_edu_anu_pme_PME_SPMD__closure__12* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__12(that_subCellsTemp, that_i__59143, that_j__59144, that_k__59145, that_centre__59141, that_charge__59142);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__12(::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp, x10_long i__59143, x10_long j__59144, x10_long k__59145, ::x10x::vector::Point3d centre__59141, x10_double charge__59142) : subCellsTemp(subCellsTemp), i__59143(i__59143), j__59144(j__59144), k__59145(k__59145), centre__59141(centre__59141), charge__59142(charge__59142) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:299-301";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__12_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__11_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* localAtoms =
          ::x10aux::nullCheck(atoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p);
        {
            
            //#line 291 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__59634 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    x10_long i__29170max__59147 = (((x10_long)(::x10aux::nullCheck(localAtoms)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__59148;
                        for (i__59148 = ((x10_long)0ll); ((i__59148) <= (i__29170max__59147));
                             i__59148 = ((i__59148) + (((x10_long)1ll))))
                        {
                            x10_long l__59149 = i__59148;
                            
                            //#line 292 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            ::au::edu::anu::chem::mm::MMAtom* atom__59140 =
                              ::x10aux::nullCheck(localAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                                l__59149);
                            
                            //#line 293 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            ::x10x::vector::Point3d centre__59141 =
                              ::x10aux::nullCheck(atom__59140)->FMGL(centre);
                            
                            //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_double charge__59142 = ::x10aux::nullCheck(atom__59140)->FMGL(charge);
                            
                            //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_long i__59143 = ((((x10_long)(::x10::lang::DoubleNatives::toInt(((centre__59141->FMGL(i)) / (halfCutoff)))))) + (halfNumSubCells));
                            
                            //#line 297 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_long j__59144 = ((((x10_long)(::x10::lang::DoubleNatives::toInt(((centre__59141->FMGL(j)) / (halfCutoff)))))) + (halfNumSubCells));
                            
                            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_long k__59145 = ((((x10_long)(::x10::lang::DoubleNatives::toInt(((centre__59141->FMGL(k)) / (halfCutoff)))))) + (halfNumSubCells));
                            
                            //#line 299 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            ::x10::lang::Runtime::runAsync(
                              ::x10aux::nullCheck(subCellsTemp->FMGL(dist))->__apply(
                                i__59143, j__59144, k__59145),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__12)))au_edu_anu_pme_PME_SPMD__closure__12(subCellsTemp, i__59143, j__59144, k__59145, centre__59141, charge__59142))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc15) {
                {
                    ::x10::lang::CheckedThrowable* ct__59632 =
                      __exc15;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__59632);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__59634);
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
        au_edu_anu_pme_PME_SPMD__closure__11* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__11>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        x10_double that_halfCutoff = buf.read<x10_double>();
        x10_long that_halfNumSubCells = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        au_edu_anu_pme_PME_SPMD__closure__11* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__11(that_atoms, that_p, that_halfCutoff, that_halfNumSubCells, that_subCellsTemp);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__11(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::lang::Point* p, x10_double halfCutoff, x10_long halfNumSubCells, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp) : atoms(atoms), p(p), halfCutoff(halfCutoff), halfNumSubCells(halfNumSubCells), subCellsTemp(subCellsTemp) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:289-303";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__11_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__10_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__59644;
            for (p__59644 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__59644));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__59644));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__11)))au_edu_anu_pme_PME_SPMD__closure__11(atoms, p, halfCutoff, halfNumSubCells, subCellsTemp))),
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
        au_edu_anu_pme_PME_SPMD__closure__10* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__10>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        x10_double that_halfCutoff = buf.read<x10_double>();
        x10_long that_halfNumSubCells = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME_SPMD__closure__10* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__10(that_atoms, that_halfCutoff, that_halfNumSubCells, that_subCellsTemp, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__10(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, x10_double halfCutoff, x10_long halfNumSubCells, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp, ::x10::regionarray::Dist* __lowerer__var__0__) : atoms(atoms), halfCutoff(halfCutoff), halfNumSubCells(halfNumSubCells), subCellsTemp(subCellsTemp), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:289-303";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__10_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__14_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
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
        au_edu_anu_pme_PME_SPMD__closure__14* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__14>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        x10_long that_i = buf.read<x10_long>();
        x10_long that_j = buf.read<x10_long>();
        x10_long that_k = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        au_edu_anu_pme_PME_SPMD__closure__14* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__14(that_subCells, that_i, that_j, that_k, that_subCellsTemp);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__14(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, x10_long i, x10_long j, x10_long k, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp) : subCells(subCells), i(i), j(j), k(k), subCellsTemp(subCellsTemp) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:305-307";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__14_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__13_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* t__59698;
            for (t__59698 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__59698));
                 ) {
                ::x10::lang::Point* t__938 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__59698));
                x10_long i = ::x10aux::nullCheck(t__938)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)0))));
                x10_long j = ::x10aux::nullCheck(t__938)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)1))));
                x10_long k = ::x10aux::nullCheck(t__938)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)2))));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__14)))au_edu_anu_pme_PME_SPMD__closure__14(subCells, i, j, k, subCellsTemp))),
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
        au_edu_anu_pme_PME_SPMD__closure__13* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__13>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME_SPMD__closure__13* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__13(that_subCells, that_subCellsTemp, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__13(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp, ::x10::regionarray::Dist* __lowerer__var__0__) : subCells(subCells), subCellsTemp(subCellsTemp), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:305-307";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__13_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__16_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::itable<au_edu_anu_pme_PME_SPMD__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* __apply(){
        try {
            return ::au::edu::anu::pme::PME_SPMD::getAtomsForSubcellList(
                     saved_this->FMGL(subCells), haloListArray);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc19) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc19;
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
    ::au::edu::anu::pme::PME_SPMD* saved_this;
    ::x10::lang::Rail< ::x10::lang::Point* >* haloListArray;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->haloListArray);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME_SPMD__closure__16* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__16>();
        buf.record_reference(storage);
        ::au::edu::anu::pme::PME_SPMD* that_saved_this = buf.read< ::au::edu::anu::pme::PME_SPMD*>();
        ::x10::lang::Rail< ::x10::lang::Point* >* that_haloListArray = buf.read< ::x10::lang::Rail< ::x10::lang::Point* >*>();
        au_edu_anu_pme_PME_SPMD__closure__16* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__16(that_saved_this, that_haloListArray);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__16(::au::edu::anu::pme::PME_SPMD* saved_this, ::x10::lang::Rail< ::x10::lang::Point* >* haloListArray) : saved_this(saved_this), haloListArray(haloListArray) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:342";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__16_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__15_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 333 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long placeId = ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>::getKey(::x10aux::nullCheck(placeEntry));
        
        //#line 334 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::ArrayList< ::x10::lang::Point*>* haloForPlace = ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>::getValue(::x10aux::nullCheck(placeEntry));
        
        //#line 335 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< ::x10::lang::Point* >* haloListArray = ::x10aux::nullCheck(haloForPlace)->toRail();
        
        //#line 336 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        if ((::x10aux::struct_equals(placeId, ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))
        {
            
            //#line 338 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            x10_long i__29255max__59162 = (((x10_long)(::x10aux::nullCheck(haloListArray)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__59163;
                for (i__59163 = ((x10_long)0ll); ((i__59163) <= (i__29255max__59162));
                     i__59163 = ((i__59163) + (((x10_long)1ll))))
                {
                    x10_long i__59164 = i__59163;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::lang::Point* p__59159 = ::x10aux::nullCheck(haloListArray)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                                                     i__59164);
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* v__59160 =
                      ::x10aux::nullCheck(saved_this->FMGL(subCells))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::__apply(
                        ::x10aux::nullCheck(haloListArray)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                          i__59164));
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__59161;
                    
                    //#line 640 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10aux::nullCheck(myAtomsCache)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__set(
                      (__extension__ ({
                          
                          //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ::x10::lang::Point* pt__59157 =
                            p__59159;
                          x10_long ret__59158;
                          
                          //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long offset__59156 = ((::x10aux::nullCheck(pt__59157)->x10::lang::Point::__apply(
                                                       ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min0)));
                          
                          //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(pt__59157)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              offset__59156 = ((((((offset__59156) * (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__59157)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min1)));
                              
                              //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long i__36722max__59153 =
                                ((::x10aux::nullCheck(pt__59157)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__59154;
                                  for (i__59154 = ((x10_long)2ll);
                                       ((i__59154) <= (i__36722max__59153));
                                       i__59154 = ((i__59154) + (((x10_long)1ll))))
                                  {
                                      x10_long i__59155 =
                                        i__59154;
                                      
                                      //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__59156 = ((((((offset__59156) * (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__59155) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__59157)->x10::lang::Point::__apply(
                                                                                                                                                  i__59155)))) - (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__59155) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          
                          //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ret__59158 = offset__59156;
                          ret__59158;
                      }))
                      , v__59160);
                    
                    //#line 641 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__59161 = v__59160;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__59161;
                }
            }
            
        } else {
            
            //#line 342 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* atomsForPlace =
              ::x10::lang::Runtime::evalAt< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* >(
                (__extension__ ({
                    ::x10::lang::Place alloc__29166 =  ::x10::lang::Place::_alloc();
                    (alloc__29166)->::x10::lang::Place::_constructor(
                      placeId);
                    alloc__29166;
                }))
                , reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__16)))au_edu_anu_pme_PME_SPMD__closure__16(saved_this, haloListArray))),
                ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
            //#line 343 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            x10_long i__29273max__59174 = (((x10_long)(::x10aux::nullCheck(haloListArray)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__59175;
                for (i__59175 = ((x10_long)0ll); ((i__59175) <= (i__29273max__59174));
                     i__59175 = ((i__59175) + (((x10_long)1ll))))
                {
                    x10_long i__59176 = i__59175;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::lang::Point* p__59171 = ::x10aux::nullCheck(haloListArray)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                                                     i__59176);
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* v__59172 =
                      atomsForPlace->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                        i__59176);
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__59173;
                    
                    //#line 640 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10aux::nullCheck(myAtomsCache)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__set(
                      (__extension__ ({
                          
                          //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ::x10::lang::Point* pt__59169 =
                            p__59171;
                          x10_long ret__59170;
                          
                          //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long offset__59168 = ((::x10aux::nullCheck(pt__59169)->x10::lang::Point::__apply(
                                                       ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min0)));
                          
                          //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(pt__59169)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              offset__59168 = ((((((offset__59168) * (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__59169)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min1)));
                              
                              //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long i__36722max__59165 =
                                ((::x10aux::nullCheck(pt__59169)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__59166;
                                  for (i__59166 = ((x10_long)2ll);
                                       ((i__59166) <= (i__36722max__59165));
                                       i__59166 = ((i__59166) + (((x10_long)1ll))))
                                  {
                                      x10_long i__59167 =
                                        i__59166;
                                      
                                      //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__59168 = ((((((offset__59168) * (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__59167) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__59169)->x10::lang::Point::__apply(
                                                                                                                                                  i__59167)))) - (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__59167) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          
                          //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ret__59170 = offset__59168;
                          ret__59170;
                      }))
                      , v__59172);
                    
                    //#line 641 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__59173 = v__59172;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__59173;
                }
            }
            
        }
        
    }
    
    // captured environment
    ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* placeEntry;
    ::au::edu::anu::pme::PME_SPMD* saved_this;
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeEntry);
        buf.write(this->saved_this);
        buf.write(this->myAtomsCache);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME_SPMD__closure__15* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__15>();
        buf.record_reference(storage);
        ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* that_placeEntry = buf.read< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>();
        ::au::edu::anu::pme::PME_SPMD* that_saved_this = buf.read< ::au::edu::anu::pme::PME_SPMD*>();
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_myAtomsCache = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        au_edu_anu_pme_PME_SPMD__closure__15* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__15(that_placeEntry, that_saved_this, that_myAtomsCache);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__15(::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* placeEntry, ::au::edu::anu::pme::PME_SPMD* saved_this, ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache) : placeEntry(placeEntry), saved_this(saved_this), myAtomsCache(myAtomsCache) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:332-347";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__15_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__17_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME_SPMD__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::itable<au_edu_anu_pme_PME_SPMD__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* __apply(x10_long i){
        
        //#line 360 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
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
        au_edu_anu_pme_PME_SPMD__closure__17* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__17>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::lang::Rail< ::x10::lang::Point* >* that_boxList = buf.read< ::x10::lang::Rail< ::x10::lang::Point* >*>();
        au_edu_anu_pme_PME_SPMD__closure__17* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__17(that_subCells, that_boxList);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__17(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::lang::Rail< ::x10::lang::Point* >* boxList) : subCells(subCells), boxList(boxList) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:360";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__17_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__18_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 373 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* thisCell__59253 =
          (__extension__ ({
            
            //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__59254 = x__59283;
            x10_long i__59255 = y__59285;
            x10_long i__59256 = z__59287;
            ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__59257;
            
            //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__59257 = ::x10aux::nullCheck(cachedAtoms)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                           (__extension__ ({
                               
                               //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               x10_long i__59193 = i__59254;
                               x10_long i__59194 = i__59255;
                               x10_long i__59195 = i__59256;
                               x10_long ret__59196;
                               
                               //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               x10_long offset__59192 = ((i__59193) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min0)));
                               
                               //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               offset__59192 = ((((((offset__59192) * (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_stride1)))) + (i__59194))) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min1)));
                               
                               //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               offset__59192 = ((((((offset__59192) * (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                         ((x10_long)0ll))))) + (i__59195))) - (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                 ((x10_long)1ll))));
                               
                               //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               ret__59196 = offset__59192;
                               ret__59196;
                           }))
                           );
            ret__59257;
        }))
        ;
        
        //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_double cellDirectEnergy__59258 = 0.0;
        
        //#line 375 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        {
            x10_long i__59259;
            for (i__59259 = ((x__59283) - (((x10_long)2ll)));
                 ((i__59259) <= (x__59283)); i__59259 = ((i__59259) + (((x10_long)1ll))))
            {
                
                //#line 376 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                x10_int n__59260 = ((x10_int)0);
                
                //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                if (((i__59259) < (((x10_long)0ll)))) {
                    
                    //#line 378 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                    n__59260 = ((x10_int)-1);
                }
                
                //#line 380 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                {
                    x10_long j__59261;
                    for (j__59261 = ((y__59285) - (((x10_long)2ll)));
                         ((j__59261) <= (((y__59285) + (((x10_long)2ll)))));
                         j__59261 = ((j__59261) + (((x10_long)1ll))))
                    {
                        
                        //#line 381 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        x10_int n__59262 = ((x10_int)0);
                        
                        //#line 382 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        if (((j__59261) < (((x10_long)0ll))))
                        {
                            
                            //#line 383 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            n__59262 = ((x10_int)-1);
                        } else 
                        //#line 384 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        if (((j__59261) > (((saved_this->FMGL(numSubCells)) - (((x10_long)1ll))))))
                        {
                            
                            //#line 385 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            n__59262 = ((x10_int)1);
                        }
                        
                        //#line 387 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        {
                            x10_long k__59263;
                            for (k__59263 = ((z__59287) - (((x10_long)2ll)));
                                 ((k__59263) <= (((z__59287) + (((x10_long)2ll)))));
                                 k__59263 = ((k__59263) + (((x10_long)1ll))))
                            {
                                
                                //#line 388 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_int n__59264 = ((x10_int)0);
                                
                                //#line 389 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                if (((k__59263) < (((x10_long)0ll))))
                                {
                                    
                                    //#line 390 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    n__59264 = ((x10_int)-1);
                                } else 
                                //#line 391 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                if (((k__59263) > (((saved_this->FMGL(numSubCells)) - (((x10_long)1ll))))))
                                {
                                    
                                    //#line 392 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    n__59264 = ((x10_int)1);
                                }
                                
                                //#line 395 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                if (((((i__59259) < (x__59283)) ||
                                    ((::x10aux::struct_equals(i__59259,
                                                              x__59283)) &&
                                    ((j__59261) < (y__59285)))) ||
                                    (((::x10aux::struct_equals(i__59259,
                                                               x__59283)) &&
                                    (::x10aux::struct_equals(j__59261,
                                                             y__59285))) &&
                                    ((k__59263) < (z__59287)))))
                                {
                                    
                                    //#line 396 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    ::x10x::vector::Vector3d translation__59265 =
                                      (__extension__ ({
                                        
                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__59266 =
                                          ((x10_long)(n__59260));
                                        x10_long i__59267 =
                                          ((x10_long)(n__59262));
                                        x10_long i__59268 =
                                          ((x10_long)(n__59264));
                                        ::x10x::vector::Vector3d ret__59269;
                                        
                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__59269 = ::x10aux::nullCheck(translations)->FMGL(raw)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                       (__extension__ ({
                                                           
                                                           //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long i__59198 =
                                                             i__59266;
                                                           x10_long i__59199 =
                                                             i__59267;
                                                           x10_long i__59200 =
                                                             i__59268;
                                                           x10_long ret__59201;
                                                           
                                                           //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long offset__59197 =
                                                             ((i__59198) - (::x10aux::nullCheck(translations)->FMGL(layout_min0)));
                                                           
                                                           //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__59197 =
                                                             ((((((offset__59197) * (::x10aux::nullCheck(translations)->FMGL(layout_stride1)))) + (i__59199))) - (::x10aux::nullCheck(translations)->FMGL(layout_min1)));
                                                           
                                                           //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__59197 =
                                                             ((((((offset__59197) * (::x10aux::nullCheck(::x10aux::nullCheck(translations)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                       ((x10_long)0ll))))) + (i__59200))) - (::x10aux::nullCheck(::x10aux::nullCheck(translations)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                               ((x10_long)1ll))));
                                                           
                                                           //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           ret__59201 =
                                                             offset__59197;
                                                           ret__59201;
                                                       }))
                                                       );
                                        ret__59269;
                                    }))
                                    ;
                                    
                                    //#line 397 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* otherCell__59270 =
                                      (__extension__ ({
                                        
                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__59271 =
                                          i__59259;
                                        x10_long i__59272 =
                                          j__59261;
                                        x10_long i__59273 =
                                          k__59263;
                                        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__59274;
                                        
                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__59274 = ::x10aux::nullCheck(cachedAtoms)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                                       (__extension__ ({
                                                           
                                                           //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long i__59203 =
                                                             i__59271;
                                                           x10_long i__59204 =
                                                             i__59272;
                                                           x10_long i__59205 =
                                                             i__59273;
                                                           x10_long ret__59206;
                                                           
                                                           //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long offset__59202 =
                                                             ((i__59203) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min0)));
                                                           
                                                           //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__59202 =
                                                             ((((((offset__59202) * (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_stride1)))) + (i__59204))) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min1)));
                                                           
                                                           //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__59202 =
                                                             ((((((offset__59202) * (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                       ((x10_long)0ll))))) + (i__59205))) - (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                               ((x10_long)1ll))));
                                                           
                                                           //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           ret__59206 =
                                                             offset__59202;
                                                           ret__59206;
                                                       }))
                                                       );
                                        ret__59274;
                                    }))
                                    ;
                                    
                                    //#line 398 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    x10_long i__29311max__59231 =
                                      (((x10_long)(::x10aux::nullCheck(otherCell__59270)->FMGL(size))) - (((x10_long)1ll)));
                                    {
                                        x10_long i__59232;
                                        for (i__59232 = ((x10_long)0ll);
                                             ((i__59232) <= (i__29311max__59231));
                                             i__59232 = ((i__59232) + (((x10_long)1ll))))
                                        {
                                            x10_long otherAtomIndex__59233 =
                                              i__59232;
                                            
                                            //#line 399 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                            ::au::edu::anu::chem::PointCharge otherAtom__59224 =
                                              ::x10aux::nullCheck(otherCell__59270)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                otherAtomIndex__59233);
                                            
                                            //#line 400 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                            ::x10x::vector::Point3d imageLoc__59225 =
                                              (__extension__ ({
                                                ::x10x::vector::Point3d this__59226 =
                                                  otherAtom__59224->FMGL(centre);
                                                
                                                //#line 31 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                ::x10x::vector::Vector3d that__59227 =
                                                  translation__59265;
                                                (__extension__ ({
                                                    
                                                    //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Vector3d b__59228 =
                                                      that__59227;
                                                    (__extension__ ({
                                                        
                                                        //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ::x10x::vector::Point3d alloc__59229 =
                                                          
                                                        ::x10x::vector::Point3d::_alloc();
                                                        
                                                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double i__59207 =
                                                          ((this__59226->FMGL(i)) + (b__59228->FMGL(i)));
                                                        x10_double j__59208 =
                                                          ((this__59226->FMGL(j)) + (b__59228->FMGL(j)));
                                                        x10_double k__59209 =
                                                          ((this__59226->FMGL(k)) + (b__59228->FMGL(k)));
                                                        
                                                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        alloc__59229->FMGL(i) =
                                                          i__59207;
                                                        alloc__59229->FMGL(j) =
                                                          j__59208;
                                                        alloc__59229->FMGL(k) =
                                                          k__59209;
                                                        alloc__59229;
                                                    }))
                                                    ;
                                                }))
                                                ;
                                            }))
                                            ;
                                            
                                            //#line 401 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                            x10_double otherAtomCharge__59230 =
                                              otherAtom__59224->FMGL(charge);
                                            
                                            //#line 402 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                            x10_long i__29293max__59221 =
                                              (((x10_long)(::x10aux::nullCheck(thisCell__59253)->FMGL(size))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__59222;
                                                for (i__59222 =
                                                       ((x10_long)0ll);
                                                     ((i__59222) <= (i__29293max__59221));
                                                     i__59222 =
                                                       ((i__59222) + (((x10_long)1ll))))
                                                {
                                                    x10_long thisAtomIndex__59223 =
                                                      i__59222;
                                                    
                                                    //#line 403 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                    ::au::edu::anu::chem::PointCharge thisAtom__59213 =
                                                      ::x10aux::nullCheck(thisCell__59253)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                        thisAtomIndex__59223);
                                                    
                                                    //#line 404 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                    x10_double rSquared__59214 =
                                                      (__extension__ ({
                                                        ::x10x::vector::Point3d this__59215 =
                                                          thisAtom__59213->FMGL(centre);
                                                        
                                                        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ::x10x::vector::Point3d b__59216 =
                                                          imageLoc__59225;
                                                        x10_double ret__59217;
                                                        
                                                        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double di__59210 =
                                                          ((this__59215->FMGL(i)) - (b__59216->FMGL(i)));
                                                        
                                                        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double dj__59211 =
                                                          ((this__59215->FMGL(j)) - (b__59216->FMGL(j)));
                                                        
                                                        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double dk__59212 =
                                                          ((this__59215->FMGL(k)) - (b__59216->FMGL(k)));
                                                        
                                                        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ret__59217 =
                                                          ((((((di__59210) * (di__59210))) + (((dj__59211) * (dj__59211))))) + (((dk__59212) * (dk__59212))));
                                                        ret__59217;
                                                    }))
                                                    ;
                                                    
                                                    //#line 405 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                    if (((rSquared__59214) < (cutoffSquared)))
                                                    {
                                                        
                                                        //#line 406 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        x10_double r__59218 =
                                                          ::x10::lang::MathNatives::sqrt(rSquared__59214);
                                                        
                                                        //#line 407 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        x10_double chargeProduct__59219 =
                                                          ((thisAtom__59213->FMGL(charge)) * (otherAtomCharge__59230));
                                                        
                                                        //#line 408 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        x10_double imageDirectComponent__59220 =
                                                          ((((chargeProduct__59219) * (::x10::lang::MathNatives::erfc(((saved_this->FMGL(beta)) * (r__59218)))))) / (r__59218));
                                                        
                                                        //#line 409 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        cellDirectEnergy__59258 =
                                                          ((cellDirectEnergy__59258) + (imageDirectComponent__59220));
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
        
        //#line 419 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long i__29347max__59250 = (((x10_long)(::x10aux::nullCheck(thisCell__59253)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__59251;
            for (i__59251 = ((x10_long)0ll); ((i__59251) <= (i__29347max__59250));
                 i__59251 = ((i__59251) + (((x10_long)1ll))))
            {
                x10_long i__59252 = i__59251;
                
                //#line 420 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                ::au::edu::anu::chem::PointCharge thisAtom__59249 =
                  ::x10aux::nullCheck(thisCell__59253)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                    i__59252);
                
                //#line 421 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                x10_long i__29329max__59246 = ((i__59252) - (((x10_long)1ll)));
                {
                    x10_long i__59247;
                    for (i__59247 = ((x10_long)0ll); ((i__59247) <= (i__29329max__59246));
                         i__59247 = ((i__59247) + (((x10_long)1ll))))
                    {
                        x10_long j__59248 = i__59247;
                        
                        //#line 422 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        ::au::edu::anu::chem::PointCharge otherAtom__59237 =
                          ::x10aux::nullCheck(thisCell__59253)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                            j__59248);
                        
                        //#line 423 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        ::x10x::vector::Vector3d rjri__59238 =
                          (__extension__ ({
                            ::x10x::vector::Point3d this__59239 =
                              otherAtom__59237->FMGL(centre);
                            
                            //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d that__59240 =
                              thisAtom__59249->FMGL(centre);
                            (__extension__ ({
                                
                                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__59241 =
                                  that__59240;
                                (__extension__ ({
                                    
                                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Vector3d alloc__59242 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__59234 =
                                      ((this__59239->FMGL(i)) - (b__59241->FMGL(i)));
                                    x10_double j__59235 =
                                      ((this__59239->FMGL(j)) - (b__59241->FMGL(j)));
                                    x10_double k__59236 =
                                      ((this__59239->FMGL(k)) - (b__59241->FMGL(k)));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__59242->FMGL(i) =
                                      i__59234;
                                    alloc__59242->FMGL(j) =
                                      j__59235;
                                    alloc__59242->FMGL(k) =
                                      k__59236;
                                    alloc__59242;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                        
                        //#line 424 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        x10_double rSquared__59243 = ((((((rjri__59238->FMGL(i)) * (rjri__59238->FMGL(i)))) + (((rjri__59238->FMGL(j)) * (rjri__59238->FMGL(j)))))) + (((rjri__59238->FMGL(k)) * (rjri__59238->FMGL(k)))));
                        
                        //#line 425 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                        if (((rSquared__59243) < (cutoffSquared)))
                        {
                            
                            //#line 426 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_double r__59244 = ::x10::lang::MathNatives::sqrt(rSquared__59243);
                            
                            //#line 427 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_double directComponent__59245 =
                              ((((((thisAtom__59249->FMGL(charge)) * (otherAtom__59237->FMGL(charge)))) * (::x10::lang::MathNatives::erfc(((saved_this->FMGL(beta)) * (r__59244)))))) / (r__59244));
                            
                            //#line 428 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            cellDirectEnergy__59258 = ((cellDirectEnergy__59258) + (directComponent__59245));
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 432 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(cellDirectEnergy__59258);
    }
    
    // captured environment
    x10_long x__59283;
    x10_long y__59285;
    x10_long z__59287;
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* cachedAtoms;
    ::au::edu::anu::pme::PME_SPMD* saved_this;
    ::x10::regionarray::Array< ::x10x::vector::Vector3d>* translations;
    x10_double cutoffSquared;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->x__59283);
        buf.write(this->y__59285);
        buf.write(this->z__59287);
        buf.write(this->cachedAtoms);
        buf.write(this->saved_this);
        buf.write(this->translations);
        buf.write(this->cutoffSquared);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME_SPMD__closure__18* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__18>();
        buf.record_reference(storage);
        x10_long that_x__59283 = buf.read<x10_long>();
        x10_long that_y__59285 = buf.read<x10_long>();
        x10_long that_z__59287 = buf.read<x10_long>();
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_cachedAtoms = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::au::edu::anu::pme::PME_SPMD* that_saved_this = buf.read< ::au::edu::anu::pme::PME_SPMD*>();
        ::x10::regionarray::Array< ::x10x::vector::Vector3d>* that_translations = buf.read< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>();
        x10_double that_cutoffSquared = buf.read<x10_double>();
        au_edu_anu_pme_PME_SPMD__closure__18* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__18(that_x__59283, that_y__59285, that_z__59287, that_cachedAtoms, that_saved_this, that_translations, that_cutoffSquared);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__18(x10_long x__59283, x10_long y__59285, x10_long z__59287, ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* cachedAtoms, ::au::edu::anu::pme::PME_SPMD* saved_this, ::x10::regionarray::Array< ::x10x::vector::Vector3d>* translations, x10_double cutoffSquared) : x__59283(x__59283), y__59285(y__59285), z__59287(z__59287), cachedAtoms(cachedAtoms), saved_this(saved_this), translations(translations), cutoffSquared(cutoffSquared) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:372-433";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__18_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__20_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Array<x10_double>* splines =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
        
        //#line 268 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        x10_long size__59513 = ((x10_long)(splineOrder));
        
        //#line 270 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::RectRegion1D* myReg__59485 =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
        (myReg__59485)->::x10::regionarray::RectRegion1D::_constructor(((size__59513) - (((x10_long)1ll))));
        
        //#line 271 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg__59485);
        splines->FMGL(rank) = ((x10_long)1ll);
        splines->FMGL(rect) = true;
        splines->FMGL(zeroBased) = true;
        splines->FMGL(rail) = true;
        splines->FMGL(size) = size__59513;
        
        //#line 273 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(layout_min0) = splines->FMGL(layout_stride1) = splines->FMGL(layout_min1) =
          ((x10_long)0ll);
        
        //#line 274 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 275 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(size__59513);
        
        //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long i__29745max__59514 = ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
        {
            x10_long i__59515;
            for (i__59515 = ((x10_long)1ll); ((i__59515) <= (i__29745max__59514));
                 i__59515 = ((i__59515) + (((x10_long)1ll))))
            {
                x10_long k__59516 = i__59515;
                
                //#line 544 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__59486 = k__59516;
                x10_double v__59487 = ::au::edu::anu::pme::PME_SPMD::bSpline(
                                        splineOrder, ((x10_double) (k__59516)));
                
                //#line 543 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_double ret__59488;
                
                //#line 547 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                splines->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  i__59486, v__59487);
                
                //#line 554 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__59488 = v__59487;
                
                //#line 543 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__59488;
            }
        }
        
        //#line 621 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* regionHere = ::x10aux::nullCheck(::x10aux::nullCheck(B)->FMGL(dist))->__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 622 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* p__59517 = regionHere;
        x10_long m3__29818min__59518 = ::x10aux::nullCheck(p__59517)->min(
                                         ((x10_long)2ll));
        x10_long m3__29818max__59519 = ::x10aux::nullCheck(p__59517)->max(
                                         ((x10_long)2ll));
        x10_long m2__29837min__59520 = ::x10aux::nullCheck(p__59517)->min(
                                         ((x10_long)1ll));
        x10_long m2__29837max__59521 = ::x10aux::nullCheck(p__59517)->max(
                                         ((x10_long)1ll));
        x10_long m1__29856min__59522 = ::x10aux::nullCheck(p__59517)->min(
                                         ((x10_long)0ll));
        x10_long m1__29856max__59523 = ::x10aux::nullCheck(p__59517)->max(
                                         ((x10_long)0ll));
        {
            x10_long m__59524;
            for (m__59524 = m1__29856min__59522; ((m__59524) <= (m1__29856max__59523));
                 m__59524 = ((m__59524) + (((x10_long)1ll))))
            {
                x10_long m__59525 = m__59524;
                {
                    x10_long m__59526;
                    for (m__59526 = m2__29837min__59520; ((m__59526) <= (m2__29837max__59521));
                         m__59526 = ((m__59526) + (((x10_long)1ll))))
                    {
                        x10_long m__59527 = m__59526;
                        {
                            x10_long m__59528;
                            for (m__59528 = m3__29818min__59518;
                                 ((m__59528) <= (m3__29818max__59519));
                                 m__59528 = ((m__59528) + (((x10_long)1ll))))
                            {
                                x10_long m__59529 = m__59528;
                                
                                //#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double m1D__59504 = ((x10_double) (m__59525));
                                
                                //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_complex sumK__59505 =
                                  x10_complex(0.0,0.0);
                                
                                //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_long i__29763max__59495 =
                                  ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
                                {
                                    x10_long i__59496;
                                    for (i__59496 = ((x10_long)0ll);
                                         ((i__59496) <= (i__29763max__59495));
                                         i__59496 = ((i__59496) + (((x10_long)1ll))))
                                    {
                                        x10_long k__59497 =
                                          i__59496;
                                        
                                        //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        sumK__59505 = ::x10::lang::ComplexNatives::_plus(sumK__59505, ::x10::lang::ComplexNatives::_times((__extension__ ({
                                            
                                            //#line 443 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__59489 =
                                              ((k__59497) + (((x10_long)1ll)));
                                            
                                            //#line 442 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_double ret__59490;
                                            
                                            //#line 446 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__59490 = splines->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                           i__59489);
                                            ret__59490;
                                        }))
                                        , ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (m1D__59504))) * (((x10_double) (k__59497))))) / (K1)), x10_complex(0.0,1.0)))));
                                    }
                                }
                                
                                //#line 628 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double b__59506 = std::abs(::x10::lang::ComplexNatives::_divide(::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))))) * (m1D__59504))) / (K1)), x10_complex(0.0,1.0))), sumK__59505));
                                
                                //#line 630 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double m2D__59507 = ((x10_double) (m__59527));
                                
                                //#line 631 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_complex sumK__59508 =
                                  x10_complex(0.0,0.0);
                                
                                //#line 632 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_long i__29781max__59498 =
                                  ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
                                {
                                    x10_long i__59499;
                                    for (i__59499 = ((x10_long)0ll);
                                         ((i__59499) <= (i__29781max__59498));
                                         i__59499 = ((i__59499) + (((x10_long)1ll))))
                                    {
                                        x10_long k__59500 =
                                          i__59499;
                                        
                                        //#line 633 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        sumK__59508 = ::x10::lang::ComplexNatives::_plus(sumK__59508, ::x10::lang::ComplexNatives::_times((__extension__ ({
                                            
                                            //#line 443 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__59491 =
                                              ((k__59500) + (((x10_long)1ll)));
                                            
                                            //#line 442 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_double ret__59492;
                                            
                                            //#line 446 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__59492 = splines->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                           i__59491);
                                            ret__59492;
                                        }))
                                        , ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (m2D__59507))) * (((x10_double) (k__59500))))) / (K2)), x10_complex(0.0,1.0)))));
                                    }
                                }
                                
                                //#line 635 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double b__59509 = std::abs(::x10::lang::ComplexNatives::_divide(::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))))) * (m2D__59507))) / (K2)), x10_complex(0.0,1.0))), sumK__59508));
                                
                                //#line 637 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double m3D__59510 = ((x10_double) (m__59529));
                                
                                //#line 638 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_complex sumK__59511 =
                                  x10_complex(0.0,0.0);
                                
                                //#line 639 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_long i__29799max__59501 =
                                  ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
                                {
                                    x10_long i__59502;
                                    for (i__59502 = ((x10_long)0ll);
                                         ((i__59502) <= (i__29799max__59501));
                                         i__59502 = ((i__59502) + (((x10_long)1ll))))
                                    {
                                        x10_long k__59503 =
                                          i__59502;
                                        
                                        //#line 640 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        sumK__59511 = ::x10::lang::ComplexNatives::_plus(sumK__59511, ::x10::lang::ComplexNatives::_times((__extension__ ({
                                            
                                            //#line 443 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__59493 =
                                              ((k__59503) + (((x10_long)1ll)));
                                            
                                            //#line 442 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_double ret__59494;
                                            
                                            //#line 446 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__59494 = splines->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                           i__59493);
                                            ret__59494;
                                        }))
                                        , ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (m3D__59510))) * (((x10_double) (k__59503))))) / (K3)), x10_complex(0.0,1.0)))));
                                    }
                                }
                                
                                //#line 642 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double b__59512 = std::abs(::x10::lang::ComplexNatives::_divide(::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))))) * (m3D__59510))) / (K3)), x10_complex(0.0,1.0))), sumK__59511));
                                
                                //#line 644 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                ::x10aux::nullCheck(B)->x10::regionarray::DistArray<x10_double>::__set(
                                  m__59525, m__59527, m__59529,
                                  ((((((((((b__59506) * (b__59506))) * (b__59509))) * (b__59509))) * (b__59512))) * (b__59512)));
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
        au_edu_anu_pme_PME_SPMD__closure__20* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__20>();
        buf.record_reference(storage);
        x10_int that_splineOrder = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_double>* that_B = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        au_edu_anu_pme_PME_SPMD__closure__20* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__20(that_splineOrder, that_B, that_K1, that_K2, that_K3);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__20(x10_int splineOrder, ::x10::regionarray::DistArray<x10_double>* B, x10_double K1, x10_double K2, x10_double K3) : splineOrder(splineOrder), B(B), K1(K1), K2(K2), K3(K3) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:616-647";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__20_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__19_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place1__59769;
            for (place1__59769 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place1__59769));
                 ) {
                ::x10::lang::Point* place1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place1__59769));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__20)))au_edu_anu_pme_PME_SPMD__closure__20(splineOrder, B, K1, K2, K3))),
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
        au_edu_anu_pme_PME_SPMD__closure__19* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__19>();
        buf.record_reference(storage);
        x10_int that_splineOrder = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_double>* that_B = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME_SPMD__closure__19* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__19(that_splineOrder, that_B, that_K1, that_K2, that_K3, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__19(x10_int splineOrder, ::x10::regionarray::DistArray<x10_double>* B, x10_double K1, x10_double K2, x10_double K3, ::x10::regionarray::Dist* __lowerer__var__0__) : splineOrder(splineOrder), B(B), K1(K1), K2(K2), K3(K3), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:616-647";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__19_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__22_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__22 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__22> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 664 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* regionHere = ::x10aux::nullCheck(::x10aux::nullCheck(C)->FMGL(dist))->__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 665 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* p__59566 = regionHere;
        x10_long m3__29877min__59567 = ::x10aux::nullCheck(p__59566)->min(
                                         ((x10_long)2ll));
        x10_long m3__29877max__59568 = ::x10aux::nullCheck(p__59566)->max(
                                         ((x10_long)2ll));
        x10_long m2__29896min__59569 = ::x10aux::nullCheck(p__59566)->min(
                                         ((x10_long)1ll));
        x10_long m2__29896max__59570 = ::x10aux::nullCheck(p__59566)->max(
                                         ((x10_long)1ll));
        x10_long m1__29915min__59571 = ::x10aux::nullCheck(p__59566)->min(
                                         ((x10_long)0ll));
        x10_long m1__29915max__59572 = ::x10aux::nullCheck(p__59566)->max(
                                         ((x10_long)0ll));
        {
            x10_long m__59573;
            for (m__59573 = m1__29915min__59571; ((m__59573) <= (m1__29915max__59572));
                 m__59573 = ((m__59573) + (((x10_long)1ll))))
            {
                x10_long m__59574 = m__59573;
                {
                    x10_long m__59575;
                    for (m__59575 = m2__29896min__59569; ((m__59575) <= (m2__29896max__59570));
                         m__59575 = ((m__59575) + (((x10_long)1ll))))
                    {
                        x10_long m__59576 = m__59575;
                        {
                            x10_long m__59577;
                            for (m__59577 = m3__29877min__59567;
                                 ((m__59577) <= (m3__29877max__59568));
                                 m__59577 = ((m__59577) + (((x10_long)1ll))))
                            {
                                x10_long m__59578 = m__59577;
                                
                                //#line 666 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double m1prime__59545 =
                                  ((((x10_double) (m__59574))) <= (((K1) / (((x10_double) (((x10_long)2ll)))))))
                                  ? (((x10_double) (m__59574)))
                                  : (((((x10_double) (m__59574))) - (K1)));
                                
                                //#line 667 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double m2prime__59546 =
                                  ((((x10_double) (m__59576))) <= (((K2) / (((x10_double) (((x10_long)2ll)))))))
                                  ? (((x10_double) (m__59576)))
                                  : (((((x10_double) (m__59576))) - (K2)));
                                
                                //#line 668 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double m3prime__59547 =
                                  ((((x10_double) (m__59578))) <= (((K3) / (((x10_double) (((x10_long)2ll)))))))
                                  ? (((x10_double) (m__59578)))
                                  : (((((x10_double) (m__59578))) - (K3)));
                                
                                //#line 669 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                ::x10x::vector::Vector3d mVec__59548 =
                                  (__extension__ ({
                                    ::x10x::vector::Vector3d this__59549 =
                                      (__extension__ ({
                                        ::x10x::vector::Vector3d this__59550 =
                                          (__extension__ ({
                                            ::x10x::vector::Vector3d this__59551 =
                                              ::x10aux::nullCheck(edgeReciprocals)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                ((x10_long)0ll));
                                            
                                            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double c__59552 =
                                              m1prime__59545;
                                            (__extension__ ({
                                                
                                                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                ::x10x::vector::Vector3d alloc__59553 =
                                                   ::x10x::vector::Vector3d::_alloc();
                                                
                                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double i__59530 =
                                                  ((this__59551->FMGL(i)) * (c__59552));
                                                x10_double j__59531 =
                                                  ((this__59551->FMGL(j)) * (c__59552));
                                                x10_double k__59532 =
                                                  ((this__59551->FMGL(k)) * (c__59552));
                                                
                                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                alloc__59553->FMGL(i) =
                                                  i__59530;
                                                alloc__59553->FMGL(j) =
                                                  j__59531;
                                                alloc__59553->FMGL(k) =
                                                  k__59532;
                                                alloc__59553;
                                            }))
                                            ;
                                        }))
                                        ;
                                        
                                        //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        ::x10x::vector::Vector3d b__59554 =
                                          (__extension__ ({
                                            
                                            //#line 669 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                            ::x10x::vector::Vector3d this__59555 =
                                              ::x10aux::nullCheck(edgeReciprocals)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                ((x10_long)1ll));
                                            
                                            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double c__59556 =
                                              m2prime__59546;
                                            (__extension__ ({
                                                
                                                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                ::x10x::vector::Vector3d alloc__59557 =
                                                   ::x10x::vector::Vector3d::_alloc();
                                                
                                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double i__59533 =
                                                  ((this__59555->FMGL(i)) * (c__59556));
                                                x10_double j__59534 =
                                                  ((this__59555->FMGL(j)) * (c__59556));
                                                x10_double k__59535 =
                                                  ((this__59555->FMGL(k)) * (c__59556));
                                                
                                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                alloc__59557->FMGL(i) =
                                                  i__59533;
                                                alloc__59557->FMGL(j) =
                                                  j__59534;
                                                alloc__59557->FMGL(k) =
                                                  k__59535;
                                                alloc__59557;
                                            }))
                                            ;
                                        }))
                                        ;
                                        (__extension__ ({
                                            
                                            //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d alloc__59558 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__59536 =
                                              ((this__59550->FMGL(i)) + (b__59554->FMGL(i)));
                                            x10_double j__59537 =
                                              ((this__59550->FMGL(j)) + (b__59554->FMGL(j)));
                                            x10_double k__59538 =
                                              ((this__59550->FMGL(k)) + (b__59554->FMGL(k)));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__59558->FMGL(i) =
                                              i__59536;
                                            alloc__59558->FMGL(j) =
                                              j__59537;
                                            alloc__59558->FMGL(k) =
                                              k__59538;
                                            alloc__59558;
                                        }))
                                        ;
                                    }))
                                    ;
                                    
                                    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d b__59559 =
                                      (__extension__ ({
                                        
                                        //#line 669 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10x::vector::Vector3d this__59560 =
                                          ::x10aux::nullCheck(edgeReciprocals)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                            ((x10_long)2ll));
                                        
                                        //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double c__59561 =
                                          m3prime__59547;
                                        (__extension__ ({
                                            
                                            //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d alloc__59562 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__59539 =
                                              ((this__59560->FMGL(i)) * (c__59561));
                                            x10_double j__59540 =
                                              ((this__59560->FMGL(j)) * (c__59561));
                                            x10_double k__59541 =
                                              ((this__59560->FMGL(k)) * (c__59561));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__59562->FMGL(i) =
                                              i__59539;
                                            alloc__59562->FMGL(j) =
                                              j__59540;
                                            alloc__59562->FMGL(k) =
                                              k__59541;
                                            alloc__59562;
                                        }))
                                        ;
                                    }))
                                    ;
                                    (__extension__ ({
                                        
                                        //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        ::x10x::vector::Vector3d alloc__59563 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__59542 =
                                          ((this__59549->FMGL(i)) + (b__59559->FMGL(i)));
                                        x10_double j__59543 =
                                          ((this__59549->FMGL(j)) + (b__59559->FMGL(j)));
                                        x10_double k__59544 =
                                          ((this__59549->FMGL(k)) + (b__59559->FMGL(k)));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__59563->FMGL(i) =
                                          i__59542;
                                        alloc__59563->FMGL(j) =
                                          j__59543;
                                        alloc__59563->FMGL(k) =
                                          k__59544;
                                        alloc__59563;
                                    }))
                                    ;
                                }))
                                ;
                                
                                //#line 670 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_double mSquared__59564 =
                                  (__extension__ ({
                                    
                                    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d vec__59565 =
                                      mVec__59548;
                                    ((((((mVec__59548->FMGL(i)) * (vec__59565->FMGL(i)))) + (((mVec__59548->FMGL(j)) * (vec__59565->FMGL(j)))))) + (((mVec__59548->FMGL(k)) * (vec__59565->FMGL(k)))));
                                }))
                                ;
                                
                                //#line 671 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                ::x10aux::nullCheck(C)->x10::regionarray::DistArray<x10_double>::__set(
                                  m__59574, m__59576, m__59578,
                                  ((::x10::lang::MathNatives::exp(((((-9.869604401089358) * (mSquared__59564))) / (((beta) * (beta)))))) / (((((mSquared__59564) * (3.141592653589793))) * (V)))));
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
        au_edu_anu_pme_PME_SPMD__closure__22* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__22>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_C = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edgeReciprocals = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        x10_double that_beta = buf.read<x10_double>();
        x10_double that_V = buf.read<x10_double>();
        au_edu_anu_pme_PME_SPMD__closure__22* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__22(that_C, that_K1, that_K2, that_K3, that_edgeReciprocals, that_beta, that_V);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__22(::x10::regionarray::DistArray<x10_double>* C, x10_double K1, x10_double K2, x10_double K3, ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals, x10_double beta, x10_double V) : C(C), K1(K1), K2(K2), K3(K3), edgeReciprocals(edgeReciprocals), beta(beta), V(V) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:663-673";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__22_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__21_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place1__59784;
            for (place1__59784 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place1__59784));
                 ) {
                ::x10::lang::Point* place1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place1__59784));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__22)))au_edu_anu_pme_PME_SPMD__closure__22(C, K1, K2, K3, edgeReciprocals, beta, V))),
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
        au_edu_anu_pme_PME_SPMD__closure__21* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__21>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_C = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edgeReciprocals = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        x10_double that_beta = buf.read<x10_double>();
        x10_double that_V = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME_SPMD__closure__21* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__21(that_C, that_K1, that_K2, that_K3, that_edgeReciprocals, that_beta, that_V, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__21(::x10::regionarray::DistArray<x10_double>* C, x10_double K1, x10_double K2, x10_double K3, ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals, x10_double beta, x10_double V, ::x10::regionarray::Dist* __lowerer__var__0__) : C(C), K1(K1), K2(K2), K3(K3), edgeReciprocals(edgeReciprocals), beta(beta), V(V), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:663-673";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__21_CLOSURE
#ifndef AU_EDU_ANU_PME_PME_SPMD__CLOSURE__23_CLOSURE
#define AU_EDU_ANU_PME_PME_SPMD__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME_SPMD__closure__23 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__23> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        try {
            
            //#line 675 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10aux::nullCheck(C)->x10::regionarray::DistArray<x10_double>::__set(
              ((x10_long)0ll), ((x10_long)0ll), ((x10_long)0ll), 0.0);
        }
        catch (::x10::lang::CheckedThrowable* __exc33) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc33;
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
        au_edu_anu_pme_PME_SPMD__closure__23* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME_SPMD__closure__23>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_C = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        au_edu_anu_pme_PME_SPMD__closure__23* this_ = new (storage) au_edu_anu_pme_PME_SPMD__closure__23(that_C);
        return this_;
    }
    
    au_edu_anu_pme_PME_SPMD__closure__23(::x10::regionarray::DistArray<x10_double>* C) : C(C) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10:674-676";
    }

};

#endif // AU_EDU_ANU_PME_PME_SPMD__CLOSURE__23_CLOSURE

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** A multi-timer for the several segments of a single getEnergy invocation, indexed by the constants above. */
::au::edu::anu::util::Timer* au::edu::anu::pme::PME_SPMD::FMGL(timer);
void au::edu::anu::pme::PME_SPMD::FMGL(timer__do_init)() {
    FMGL(timer__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::pme::PME_SPMD.timer");
    ::au::edu::anu::util::Timer* __var8__ = ::au::edu::anu::util::Timer::_make(((x10_long)9ll));
    FMGL(timer) = __var8__;
    FMGL(timer__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::pme::PME_SPMD::FMGL(timer__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(timer__status), &FMGL(timer__do_init), &FMGL(timer__exception), "au::edu::anu::pme::PME_SPMD.timer");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::pme::PME_SPMD::FMGL(timer__status);
::x10::lang::CheckedThrowable* au::edu::anu::pme::PME_SPMD::FMGL(timer__exception);


//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The number of grid lines in each dimension of the simulation unit cell. */

//#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** Double representations of the various grid dimensions */

//#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The edges of the unit cell. */

//#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The conjugate reciprocal vectors for each dimension. */

//#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** 
     * Scaling vector for scaled fractional coordinates.
     * Assumes unit rectangular cell. 
     */

//#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The order of B-spline interpolation */

//#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The Ewald coefficient beta */

//#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The direct sum cutoff distance in Angstroms */

//#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** 
     * Translation vectors for neighbouring unit cells 
     * (the 26 cells surrounding the origin cell).
     * These are replicated across all places using a PlaceLocalHandle.
     * Dimensions of the enclosed array are:
     * 0: x translation (difference between x-coordinate of sub-cells
     * 1: y translation
     * 2: z translation
     */

//#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The atoms in the simulation, divided up into a distributed array of Arrays, one for each place. */

//#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The gridded charge array Q as defined in Eq. 4.6 */

//#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The inverse DFT of the Q array.  TODO this should be a scoped local variable in getEnergy() XTENLANG-??? */

//#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** thetaRecConvQ as used in Eq. 4.7.  TODO this should be a scoped local variable in getEnergy() XTENLANG-??? */

//#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** Scratch array for use during 3D FFT.  TODO this should be a scoped local variable in getEnergy() XTENLANG-??? */

//#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"

//#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
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

//#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** The number of sub-cells per side of the unit cell. */

//#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
/** 
     * A cache of atoms from subcells stored at other places.  
     * This is used to prefetch atom data for direct energy calculation.
     */

//#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::_constructor(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges,
                                               ::x10::lang::Rail< x10_long >* gridSize,
                                               ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                                               x10_int splineOrder,
                                               x10_double beta,
                                               x10_double cutoff) {
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD* this__59007 = this;
    
    //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(gridSize) = gridSize;
    
    //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K1 = ((x10_double) (::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll))));
    
    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K2 = ((x10_double) (::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll))));
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K3 = ((x10_double) (::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)2ll))));
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(edges) = edges;
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(edgeLengths) = ::x10::lang::Rail< x10_double >::_make(((x10_long)3ll),
                                                                     reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__1)))au_edu_anu_pme_PME_SPMD__closure__1(edges))));
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(edgeReciprocals) = ::x10::lang::Rail< ::x10x::vector::Vector3d >::_make(((x10_long)3ll),
                                                                                       reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__2)))au_edu_anu_pme_PME_SPMD__closure__2(edges))));
    
    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(scalingVector) = (__extension__ ({
        ::x10x::vector::Vector3d alloc__29158 =  ::x10x::vector::Vector3d::_alloc();
        
        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        x10_double i__59031 = (((__extension__ ({
                                    
                                    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    ::x10x::vector::Vector3d this__59032 =
                                      ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                        ((x10_long)0ll));
                                    
                                    //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d ret__59033;
                                    
                                    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double l__59019 =
                                      ((((((this__59032->FMGL(i)) * (this__59032->FMGL(i)))) + (((this__59032->FMGL(j)) * (this__59032->FMGL(j)))))) + (((this__59032->FMGL(k)) * (this__59032->FMGL(k)))));
                                    
                                    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ret__59033 = (__extension__ ({
                                        ::x10x::vector::Vector3d alloc__59020 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__59016 =
                                          ((this__59032->FMGL(i)) / (l__59019));
                                        x10_double j__59017 =
                                          ((this__59032->FMGL(j)) / (l__59019));
                                        x10_double k__59018 =
                                          ((this__59032->FMGL(k)) / (l__59019));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__59020->FMGL(i) =
                                          i__59016;
                                        alloc__59020->FMGL(j) =
                                          j__59017;
                                        alloc__59020->FMGL(k) =
                                          k__59018;
                                        alloc__59020;
                                    }))
                                    ;
                                    ret__59033;
                                }))
                                ->FMGL(i)) * (K1));
        x10_double j__59034 = (((__extension__ ({
                                    
                                    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    ::x10x::vector::Vector3d this__59035 =
                                      ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d ret__59036;
                                    
                                    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double l__59024 =
                                      ((((((this__59035->FMGL(i)) * (this__59035->FMGL(i)))) + (((this__59035->FMGL(j)) * (this__59035->FMGL(j)))))) + (((this__59035->FMGL(k)) * (this__59035->FMGL(k)))));
                                    
                                    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ret__59036 = (__extension__ ({
                                        ::x10x::vector::Vector3d alloc__59025 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__59021 =
                                          ((this__59035->FMGL(i)) / (l__59024));
                                        x10_double j__59022 =
                                          ((this__59035->FMGL(j)) / (l__59024));
                                        x10_double k__59023 =
                                          ((this__59035->FMGL(k)) / (l__59024));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__59025->FMGL(i) =
                                          i__59021;
                                        alloc__59025->FMGL(j) =
                                          j__59022;
                                        alloc__59025->FMGL(k) =
                                          k__59023;
                                        alloc__59025;
                                    }))
                                    ;
                                    ret__59036;
                                }))
                                ->FMGL(j)) * (K2));
        x10_double k__59037 = (((__extension__ ({
                                    
                                    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    ::x10x::vector::Vector3d this__59038 =
                                      ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                        ((x10_long)2ll));
                                    
                                    //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d ret__59039;
                                    
                                    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double l__59029 =
                                      ((((((this__59038->FMGL(i)) * (this__59038->FMGL(i)))) + (((this__59038->FMGL(j)) * (this__59038->FMGL(j)))))) + (((this__59038->FMGL(k)) * (this__59038->FMGL(k)))));
                                    
                                    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ret__59039 = (__extension__ ({
                                        ::x10x::vector::Vector3d alloc__59030 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__59026 =
                                          ((this__59038->FMGL(i)) / (l__59029));
                                        x10_double j__59027 =
                                          ((this__59038->FMGL(j)) / (l__59029));
                                        x10_double k__59028 =
                                          ((this__59038->FMGL(k)) / (l__59029));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__59030->FMGL(i) =
                                          i__59026;
                                        alloc__59030->FMGL(j) =
                                          j__59027;
                                        alloc__59030->FMGL(k) =
                                          k__59028;
                                        alloc__59030;
                                    }))
                                    ;
                                    ret__59039;
                                }))
                                ->FMGL(k)) * (K3));
        
        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        alloc__29158->FMGL(i) = i__59031;
        alloc__29158->FMGL(j) = j__59034;
        alloc__29158->FMGL(k) = k__59037;
        alloc__29158;
    }))
    ;
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(K1) = K1;
    
    //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(K2) = K2;
    
    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(K3) = K3;
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(atoms) = atoms;
    
    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* gridRegion = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__32388 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                                                                             ((x10_long)0ll))) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__32389 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                                                                             ((x10_long)1ll))) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__32390 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                                                                             ((x10_long)2ll))) - (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__32388,
                                                    r__32389,
                                                    r__32390);
    }))
    ;
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Dist* gridDist = ::x10::regionarray::Dist::makeBlockBlock(
                                           gridRegion, ((x10_long)0ll),
                                           ((x10_long)1ll));
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(gridDist) = gridDist;
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(splineOrder) = splineOrder;
    
    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(beta) = beta;
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(cutoff) = cutoff;
    
    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(imageTranslations) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::regionarray::Array< ::x10x::vector::Vector3d>* >(
                                      ::x10::lang::Place::places(),
                                      reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__3)))au_edu_anu_pme_PME_SPMD__closure__3(edges))));
    
    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((!::x10aux::struct_equals(::x10::lang::DoubleNatives::mod(::x10aux::nullCheck(this->FMGL(edgeLengths))->x10::lang::Rail< x10_double >::__apply(
                                                                    ((x10_long)0ll)), ((cutoff) / (2.0))),
                                  0.0))) {
        
        //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::pme::PME_SPMD_Strings::sl__65891), ::x10aux::nullCheck(this->FMGL(edgeLengths))->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                          ((x10_long)0ll))), (&::au::edu::anu::pme::PME_SPMD_Strings::sl__65892)), ((cutoff) / (2.0)))));
    }
    
    //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long numSubCells = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((::x10aux::nullCheck(this->FMGL(edgeLengths))->x10::lang::Rail< x10_double >::__apply(
                                                                                                 ((x10_long)0ll))) / (((cutoff) / (2.0))))));
    
    //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* subCellRegion = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__36986 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((numSubCells) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__36987 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((numSubCells) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__36988 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((numSubCells) - (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__36986,
                                                    r__36987,
                                                    r__36988);
    }))
    ;
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells =
      (__extension__ ({
        
        //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__38987 = reinterpret_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10::regionarray::PeriodicDist* alloc__29160 =
               (new (::x10aux::alloc_z< ::x10::regionarray::PeriodicDist>()) ::x10::regionarray::PeriodicDist());
            (alloc__29160)->::x10::regionarray::PeriodicDist::_constructor(
              ::x10::regionarray::Dist::makeBlockBlock(subCellRegion,
                                                       ((x10_long)0ll),
                                                       ((x10_long)1ll)));
            alloc__29160;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* alloc__38988 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >()) ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>());
            (alloc__38988)->::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::_constructor(
              dist__38987);
            alloc__38988;
        }))
        ;
    }))
    ;
    
    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(subCells) = subCells;
    
    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(numSubCells) = numSubCells;
    
    //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache =
      (__extension__ ({
        
        //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__38991 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__38989 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__38989)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__38989;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* alloc__38992 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*> >()) ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>());
            (alloc__38992)->::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::_constructor(
              dist__38991);
            alloc__38992;
        }))
        ;
    }))
    ;
    {
        
        //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59609 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      atomsCache->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____59606;
                        for (__lowerer__var__1____59606 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____59606));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____59606));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__4)))au_edu_anu_pme_PME_SPMD__closure__4(subCells, atomsCache, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            {
                ::x10::lang::CheckedThrowable* ct__59607 =
                  __exc9;
                {
                    ::x10::lang::Runtime::pushException(ct__59607);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59609);
    }
    
    //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(atomsCache) = atomsCache;
    
    //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(Q) = ((__extension__ ({
                         
                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                         ::x10::regionarray::Dist* dist__39009 =
                           gridDist;
                         (__extension__ ({
                             ::x10::regionarray::DistArray<x10_double>* alloc__39010 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                             (alloc__39010)->::x10::regionarray::DistArray<x10_double>::_constructor(
                               dist__39009);
                             alloc__39010;
                         }))
                         ;
                     }))
                     );
    
    //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(BdotC) = ((__extension__ ({
                             
                             //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                             ::x10::regionarray::Dist* dist__39011 =
                               gridDist;
                             (__extension__ ({
                                 ::x10::regionarray::DistArray<x10_double>* alloc__39012 =
                                    (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                                 (alloc__39012)->::x10::regionarray::DistArray<x10_double>::_constructor(
                                   dist__39011);
                                 alloc__39012;
                             }))
                             ;
                         }))
                         );
    
    //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(Qinv) = ((__extension__ ({
                            
                            //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                            ::x10::regionarray::Dist* dist__39013 =
                              gridDist;
                            (__extension__ ({
                                ::x10::regionarray::DistArray<x10_complex>* alloc__39014 =
                                   (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_complex> >()) ::x10::regionarray::DistArray<x10_complex>());
                                (alloc__39014)->::x10::regionarray::DistArray<x10_complex>::_constructor(
                                  dist__39013);
                                alloc__39014;
                            }))
                            ;
                        }))
                        );
    
    //#line 208 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(thetaRecConvQ) = ((__extension__ ({
                                     
                                     //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                                     ::x10::regionarray::Dist* dist__39015 =
                                       gridDist;
                                     (__extension__ ({
                                         ::x10::regionarray::DistArray<x10_complex>* alloc__39016 =
                                            (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_complex> >()) ::x10::regionarray::DistArray<x10_complex>());
                                         (alloc__39016)->::x10::regionarray::DistArray<x10_complex>::_constructor(
                                           dist__39015);
                                         alloc__39016;
                                     }))
                                     ;
                                 }))
                                 );
    
    //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(thetaRecConvQReal) = ((__extension__ ({
                                         
                                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                                         ::x10::regionarray::Dist* dist__39017 =
                                           gridDist;
                                         (__extension__ ({
                                             ::x10::regionarray::DistArray<x10_double>* alloc__39018 =
                                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                                             (alloc__39018)->::x10::regionarray::DistArray<x10_double>::_constructor(
                                               dist__39017);
                                             alloc__39018;
                                         }))
                                         ;
                                     }))
                                     );
    
    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(temp) = ((__extension__ ({
                            
                            //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                            ::x10::regionarray::Dist* dist__39019 =
                              gridDist;
                            (__extension__ ({
                                ::x10::regionarray::DistArray<x10_complex>* alloc__39020 =
                                   (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_complex> >()) ::x10::regionarray::DistArray<x10_complex>());
                                (alloc__39020)->::x10::regionarray::DistArray<x10_complex>::_constructor(
                                  dist__39019);
                                alloc__39020;
                            }))
                            ;
                        }))
                        );
    
    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(temp2) = ((__extension__ ({
                             
                             //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                             ::x10::regionarray::Dist* dist__39021 =
                               gridDist;
                             (__extension__ ({
                                 ::x10::regionarray::DistArray<x10_double>* alloc__39022 =
                                    (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                                 (alloc__39022)->::x10::regionarray::DistArray<x10_double>::_constructor(
                                   dist__39021);
                                 alloc__39022;
                             }))
                             ;
                         }))
                         );
    
    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(B) = ((__extension__ ({
                         
                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                         ::x10::regionarray::Dist* dist__39023 =
                           gridDist;
                         (__extension__ ({
                             ::x10::regionarray::DistArray<x10_double>* alloc__39024 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                             (alloc__39024)->::x10::regionarray::DistArray<x10_double>::_constructor(
                               dist__39023);
                             alloc__39024;
                         }))
                         ;
                     }))
                     );
    
    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->FMGL(C) = ((__extension__ ({
                         
                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                         ::x10::regionarray::Dist* dist__39025 =
                           gridDist;
                         (__extension__ ({
                             ::x10::regionarray::DistArray<x10_double>* alloc__39026 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                             (alloc__39026)->::x10::regionarray::DistArray<x10_double>::_constructor(
                               dist__39025);
                             alloc__39026;
                         }))
                         ;
                     }))
                     );
}
::au::edu::anu::pme::PME_SPMD* au::edu::anu::pme::PME_SPMD::_make(
  ::x10::lang::Rail< ::x10x::vector::Vector3d >* edges, ::x10::lang::Rail< x10_long >* gridSize,
  ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
  x10_int splineOrder, x10_double beta, x10_double cutoff)
{
    ::au::edu::anu::pme::PME_SPMD* this_ = new (::x10aux::alloc_z< ::au::edu::anu::pme::PME_SPMD>()) ::au::edu::anu::pme::PME_SPMD();
    this_->_constructor(edges, gridSize, atoms, splineOrder,
    beta, cutoff);
    return this_;
}



//#line 222 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::setup() {
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
      ((x10_long)(((x10_int)8))));
    
    //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->initBArray();
    
    //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->initCArray();
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10aux::nullCheck(this->FMGL(B))->map< x10_double, x10_double >(
      this->FMGL(BdotC), this->FMGL(C), reinterpret_cast< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__6)))au_edu_anu_pme_PME_SPMD__closure__6())));
    
    //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    this->divideAtomsIntoSubCells();
    
    //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
      ((x10_long)(((x10_int)8))));
}

//#line 231 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::getEnergy() {
    
    //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double totalEnergy;
    {
        ::x10::lang::FinishState* fs__59626 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double> alloc__29162 =
                                                                                                                 
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double>::_alloc();
                                                                                                               alloc__29162;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__39455 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__39455)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__39455;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____59624;
                        for (__lowerer__var__1____59624 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____59624));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____59624));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__7)))au_edu_anu_pme_PME_SPMD__closure__7(this, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc12;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        totalEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                        fs__59626);
    }
    
    //#line 277 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return totalEnergy;
    
}

//#line 284 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::divideAtomsIntoSubCells(
  ) {
    
    //#line 285 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double halfCutoff = ((this->FMGL(cutoff)) / (2.0));
    
    //#line 286 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp =
      (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__56744 = ::x10aux::nullCheck(this->FMGL(subCells))->FMGL(dist);
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* alloc__56746 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >()) ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>());
            (alloc__56746)->::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::_constructor(
              dist__56744, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__9)))au_edu_anu_pme_PME_SPMD__closure__9())));
            alloc__56746;
        }))
        ;
    }))
    ;
    
    //#line 287 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
      this->FMGL(atoms);
    
    //#line 288 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long halfNumSubCells = ((this->FMGL(numSubCells)) / ::x10aux::zeroCheck(((x10_long)2ll)));
    {
        
        //#line 289 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59649 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(atoms)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____59646;
                        for (__lowerer__var__1____59646 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____59646));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____59646));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__10)))au_edu_anu_pme_PME_SPMD__closure__10(atoms, halfCutoff, halfNumSubCells, subCellsTemp, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc16) {
            {
                ::x10::lang::CheckedThrowable* ct__59647 =
                  __exc16;
                {
                    ::x10::lang::Runtime::pushException(ct__59647);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59649);
    }
    
    //#line 304 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells =
      this->FMGL(subCells);
    {
        
        //#line 305 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59742 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(subCells)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____59739;
                        for (__lowerer__var__1____59739 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____59739));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____59739));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__13)))au_edu_anu_pme_PME_SPMD__closure__13(subCells, subCellsTemp, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc17) {
            {
                ::x10::lang::CheckedThrowable* ct__59740 =
                  __exc17;
                {
                    ::x10::lang::Runtime::pushException(ct__59740);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59742);
    }
}

//#line 314 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::prefetchPackedAtomsLocal(
  ) {
    
    //#line 315 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
      ((x10_long)(((x10_int)7))));
    
    //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache =
      ::x10aux::nullCheck(this->FMGL(atomsCache))->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__apply(
        ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
    
    //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((!::x10aux::struct_equals(myAtomsCache, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 318 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* haloPlaces =
           (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*> >()) ::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>());
        (haloPlaces)->::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>::_constructor(
          ((x10_long)8ll));
        
        //#line 321 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< x10_long >* boxIndex__59177 = (__extension__ ({
            ::x10::lang::Rail< x10_long >* t__65866 = ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
            ::x10aux::nullCheck(t__65866)->x10::lang::Rail< x10_long >::__set(
              ((x10_long)0ll), ((x10_long)0ll));
            ::x10aux::nullCheck(t__65866)->x10::lang::Rail< x10_long >::__set(
              ((x10_long)1ll), ((x10_long)0ll));
            ::x10aux::nullCheck(t__65866)->x10::lang::Rail< x10_long >::__set(
              ((x10_long)2ll), ((x10_long)0ll));
            t__65866;
        }))
        ;
        ::x10::regionarray::Region* boxIndex__59178 = ::x10aux::nullCheck(myAtomsCache)->FMGL(region);
        x10_long z__29190min__59179 = boxIndex__59178->min(
                                        ((x10_long)2ll));
        x10_long z__29190max__59180 = boxIndex__59178->max(
                                        ((x10_long)2ll));
        x10_long y__29212min__59181 = boxIndex__59178->min(
                                        ((x10_long)1ll));
        x10_long y__29212max__59182 = boxIndex__59178->max(
                                        ((x10_long)1ll));
        x10_long x__29233min__59183 = boxIndex__59178->min(
                                        ((x10_long)0ll));
        x10_long x__29233max__59184 = boxIndex__59178->max(
                                        ((x10_long)0ll));
        {
            x10_long x__59185;
            for (x__59185 = x__29233min__59183; ((x__59185) <= (x__29233max__59184));
                 x__59185 = ((x__59185) + (((x10_long)1ll))))
            {
                x10_long x__59186 = x__59185;
                ::x10aux::nullCheck(boxIndex__59177)->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)0ll), x__59185);
                {
                    x10_long y__59187;
                    for (y__59187 = y__29212min__59181; ((y__59187) <= (y__29212max__59182));
                         y__59187 = ((y__59187) + (((x10_long)1ll))))
                    {
                        x10_long y__59188 = y__59187;
                        ::x10aux::nullCheck(boxIndex__59177)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)1ll), y__59187);
                        {
                            x10_long z__59189;
                            for (z__59189 = z__29190min__59179;
                                 ((z__59189) <= (z__29190max__59180));
                                 z__59189 = ((z__59189) + (((x10_long)1ll))))
                            {
                                x10_long z__59190 = z__59189;
                                ::x10aux::nullCheck(boxIndex__59177)->x10::lang::Rail< x10_long >::__set(
                                  ((x10_long)2ll), z__59189);
                                ::x10::lang::Point* boxIndex__59191 =
                                  ::x10::lang::Point::make(
                                    boxIndex__59177);
                                
                                //#line 322 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_long placeId__59150 =
                                  ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(subCells))->FMGL(dist))->__apply(
                                    x__59186, y__59188, z__59190)->FMGL(id);
                                
                                //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                ::x10::util::ArrayList< ::x10::lang::Point*>* haloForPlace__59151 =
                                  haloPlaces->getOrElse(placeId__59150,
                                                        ::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::lang::Point*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                
                                //#line 324 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                if ((::x10aux::struct_equals(haloForPlace__59151,
                                                             reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                                {
                                    
                                    //#line 325 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    haloForPlace__59151 =
                                      (__extension__ ({
                                        ::x10::util::ArrayList< ::x10::lang::Point*>* alloc__59152 =
                                           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::lang::Point*> >()) ::x10::util::ArrayList< ::x10::lang::Point*>());
                                        (alloc__59152)->::x10::util::ArrayList< ::x10::lang::Point*>::_constructor();
                                        alloc__59152;
                                    }))
                                    ;
                                    
                                    //#line 326 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    haloPlaces->put(placeId__59150,
                                                    haloForPlace__59151);
                                }
                                
                                //#line 328 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                ::x10aux::nullCheck(haloForPlace__59151)->add(
                                  boxIndex__59191);
                            }
                        }
                        
                    }
                }
                
            }
        }
        {
            
            //#line 332 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__59751 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    {
                        ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>* placeEntry__29291;
                        for (placeEntry__29291 = ::x10::util::Set< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>::iterator(::x10aux::nullCheck(haloPlaces->entries()));
                             ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>::hasNext(::x10aux::nullCheck(placeEntry__29291));
                             ) {
                            ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* placeEntry =
                              ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>::next(::x10aux::nullCheck(placeEntry__29291));
                            ::x10::lang::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__15)))au_edu_anu_pme_PME_SPMD__closure__15(placeEntry, this, myAtomsCache))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc20) {
                {
                    ::x10::lang::CheckedThrowable* ct__59749 =
                      __exc20;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__59749);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__59751);
        }
    }
    
    //#line 349 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
      ((x10_long)(((x10_int)7))));
}

//#line 358 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*
  au::edu::anu::pme::PME_SPMD::getAtomsForSubcellList(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells,
                                                      ::x10::lang::Rail< ::x10::lang::Point* >* boxList) {
    
    //#line 359 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* atoms =
      ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::_make((x10_long)(::x10aux::nullCheck(boxList)->FMGL(size)),
                                                                                          reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >(sizeof(au_edu_anu_pme_PME_SPMD__closure__17)))au_edu_anu_pme_PME_SPMD__closure__17(subCells, boxList))));
    
    //#line 361 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return atoms;
    
}

//#line 364 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::getDirectEnergy() {
    
    //#line 365 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
      ((x10_long)(((x10_int)6))));
    
    //#line 366 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double cutoffSquared = ((this->FMGL(cutoff)) * (this->FMGL(cutoff)));
    
    //#line 367 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Dist* subCellsDist = ::x10aux::nullCheck(this->FMGL(subCells))->FMGL(dist);
    
    //#line 368 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* cachedAtoms =
      ::x10aux::nullCheck(this->FMGL(atomsCache))->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__apply(
        ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
    
    //#line 369 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array< ::x10x::vector::Vector3d>* translations =
      this->FMGL(imageTranslations)->x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>::__apply();
    
    //#line 370 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(subCellsDist)->__apply(
                                                ::x10::lang::Place::_make(::x10aux::here));
    
    //#line 371 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double directEnergy;
    {
        ::x10::lang::FinishState* fs__59758 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double> alloc__29167 =
                                                                                                                 
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double>::_alloc();
                                                                                                               alloc__29167;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                
                //#line 372 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                ::x10::regionarray::Region* p__59275 = localRegion;
                x10_long z__29366min__59276 = ::x10aux::nullCheck(p__59275)->min(
                                                ((x10_long)2ll));
                x10_long z__29366max__59277 = ::x10aux::nullCheck(p__59275)->max(
                                                ((x10_long)2ll));
                x10_long y__29385min__59278 = ::x10aux::nullCheck(p__59275)->min(
                                                ((x10_long)1ll));
                x10_long y__29385max__59279 = ::x10aux::nullCheck(p__59275)->max(
                                                ((x10_long)1ll));
                x10_long x__29404min__59280 = ::x10aux::nullCheck(p__59275)->min(
                                                ((x10_long)0ll));
                x10_long x__29404max__59281 = ::x10aux::nullCheck(p__59275)->max(
                                                ((x10_long)0ll));
                {
                    x10_long x__59282;
                    for (x__59282 = x__29404min__59280; ((x__59282) <= (x__29404max__59281));
                         x__59282 = ((x__59282) + (((x10_long)1ll))))
                    {
                        x10_long x__59283 = x__59282;
                        {
                            x10_long y__59284;
                            for (y__59284 = y__29385min__59278;
                                 ((y__59284) <= (y__29385max__59279));
                                 y__59284 = ((y__59284) + (((x10_long)1ll))))
                            {
                                x10_long y__59285 = y__59284;
                                {
                                    x10_long z__59286;
                                    for (z__59286 = z__29366min__59276;
                                         ((z__59286) <= (z__29366max__59277));
                                         z__59286 = ((z__59286) + (((x10_long)1ll))))
                                    {
                                        x10_long z__59287 =
                                          z__59286;
                                        ::x10::lang::Runtime::runAsync(
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__18)))au_edu_anu_pme_PME_SPMD__closure__18(x__59283, y__59285, z__59287, cachedAtoms, this, translations, cutoffSquared))));
                                    }
                                }
                                
                            }
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc23) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc23;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        directEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                         fs__59758);
    }
    
    //#line 435 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
      ((x10_long)(((x10_int)6))));
    
    //#line 436 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return directEnergy;
    
}

//#line 444 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::getSelfEnergy() {
    
    //#line 445 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
      ((x10_long)(((x10_int)5))));
    
    //#line 446 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* localSubCells =
      ::x10aux::nullCheck(this->FMGL(subCells))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::getLocalPortion();
    
    //#line 447 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localSubCells)->FMGL(region);
    
    //#line 448 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double mySelfEnergy = 0.0;
    
    //#line 449 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* p__59301 = localRegion;
    x10_long k__29443min__59302 = ::x10aux::nullCheck(p__59301)->min(
                                    ((x10_long)2ll));
    x10_long k__29443max__59303 = ::x10aux::nullCheck(p__59301)->max(
                                    ((x10_long)2ll));
    x10_long j__29462min__59304 = ::x10aux::nullCheck(p__59301)->min(
                                    ((x10_long)1ll));
    x10_long j__29462max__59305 = ::x10aux::nullCheck(p__59301)->max(
                                    ((x10_long)1ll));
    x10_long i__29481min__59306 = ::x10aux::nullCheck(p__59301)->min(
                                    ((x10_long)0ll));
    x10_long i__29481max__59307 = ::x10aux::nullCheck(p__59301)->max(
                                    ((x10_long)0ll));
    {
        x10_long i__59308;
        for (i__59308 = i__29481min__59306; ((i__59308) <= (i__29481max__59307));
             i__59308 = ((i__59308) + (((x10_long)1ll))))
        {
            x10_long i__59309 = i__59308;
            {
                x10_long j__59310;
                for (j__59310 = j__29462min__59304; ((j__59310) <= (j__29462max__59305));
                     j__59310 = ((j__59310) + (((x10_long)1ll))))
                {
                    x10_long j__59311 = j__59310;
                    {
                        x10_long k__59312;
                        for (k__59312 = k__29443min__59302;
                             ((k__59312) <= (k__29443max__59303));
                             k__59312 = ((k__59312) + (((x10_long)1ll))))
                        {
                            x10_long k__59313 = k__59312;
                            
                            //#line 450 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* thisCell__59296 =
                              (__extension__ ({
                                
                                //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__59297 = i__59309;
                                x10_long i__59298 = j__59311;
                                x10_long i__59299 = k__59313;
                                ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__59300;
                                
                                //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__59300 = ::x10aux::nullCheck(localSubCells)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long i__59289 =
                                                     i__59297;
                                                   x10_long i__59290 =
                                                     i__59298;
                                                   x10_long i__59291 =
                                                     i__59299;
                                                   x10_long ret__59292;
                                                   
                                                   //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__59288 =
                                                     ((i__59289) - (::x10aux::nullCheck(localSubCells)->FMGL(layout_min0)));
                                                   
                                                   //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   offset__59288 =
                                                     ((((((offset__59288) * (::x10aux::nullCheck(localSubCells)->FMGL(layout_stride1)))) + (i__59290))) - (::x10aux::nullCheck(localSubCells)->FMGL(layout_min1)));
                                                   
                                                   //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   offset__59288 =
                                                     ((((((offset__59288) * (::x10aux::nullCheck(::x10aux::nullCheck(localSubCells)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                               ((x10_long)0ll))))) + (i__59291))) - (::x10aux::nullCheck(::x10aux::nullCheck(localSubCells)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)1ll))));
                                                   
                                                   //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__59292 =
                                                     offset__59288;
                                                   ret__59292;
                                               }))
                                               );
                                ret__59300;
                            }))
                            ;
                            
                            //#line 451 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            x10_long i__29424max__59293 =
                              (((x10_long)(::x10aux::nullCheck(thisCell__59296)->FMGL(size))) - (((x10_long)1ll)));
                            {
                                x10_long i__59294;
                                for (i__59294 = ((x10_long)0ll);
                                     ((i__59294) <= (i__29424max__59293));
                                     i__59294 = ((i__59294) + (((x10_long)1ll))))
                                {
                                    x10_long thisAtom__59295 =
                                      i__59294;
                                    
                                    //#line 452 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                    mySelfEnergy = ((mySelfEnergy) + (((::x10aux::nullCheck(thisCell__59296)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                                          thisAtom__59295)->FMGL(charge)) * (::x10aux::nullCheck(thisCell__59296)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                                                                               thisAtom__59295)->FMGL(charge)))));
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 455 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double selfEnergy = ((((mySelfEnergy) * ((-(this->FMGL(beta)))))) / (::x10::lang::MathNatives::sqrt(3.141592653589793)));
    
    //#line 456 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
      ((x10_long)(((x10_int)5))));
    
    //#line 457 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return selfEnergy;
    
}

//#line 465 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::gridChargesLocal() {
    
    //#line 466 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
      ((x10_long)(((x10_int)1))));
    
    //#line 468 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array<x10_double>* qLocal = ::x10aux::nullCheck(this->FMGL(Q))->x10::regionarray::DistArray<x10_double>::getLocalPortion();
    
    //#line 469 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* localGridRegion = ::x10aux::nullCheck(qLocal)->FMGL(region);
    
    //#line 470 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if (!(::x10aux::nullCheck(localGridRegion)->isEmpty()))
    {
        
        //#line 471 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* subCellRegion = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(subCells))->FMGL(dist))->FMGL(region);
        
        //#line 472 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10aux::nullCheck(qLocal)->x10::regionarray::Array<x10_double>::clear();
        
        //#line 473 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long gridSize0 = ::x10aux::nullCheck(this->FMGL(gridSize))->x10::lang::Rail< x10_long >::__apply(
                               ((x10_long)0ll));
        
        //#line 474 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long gridSize1 = ::x10aux::nullCheck(this->FMGL(gridSize))->x10::lang::Rail< x10_long >::__apply(
                               ((x10_long)1ll));
        
        //#line 475 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long gridSize2 = ::x10aux::nullCheck(this->FMGL(gridSize))->x10::lang::Rail< x10_long >::__apply(
                               ((x10_long)2ll));
        
        //#line 476 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache =
          ::x10aux::nullCheck(this->FMGL(atomsCache))->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__apply(
            ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
        
        //#line 478 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* subCellHaloRegion = (__extension__ ({
            x10_long gridSize__27381 = gridSize0;
            x10_long numSubCells__27382 = this->FMGL(numSubCells);
            x10_int splineOrder__27383 = this->FMGL(splineOrder);
            ::x10::regionarray::Region* gridRegion__27384 =
              localGridRegion;
            ::x10::regionarray::Region* subCellRegion__27385 =
              subCellRegion;
            if (!(((((::x10aux::struct_equals(::x10aux::nullCheck(gridRegion__27384)->FMGL(rect),
                                              true)) && (::x10aux::struct_equals(::x10aux::nullCheck(gridRegion__27384)->FMGL(rank),
                                                                                 ((x10_long)3ll)))) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(subCellRegion__27385)->FMGL(rect),
                                         true))) && (::x10aux::struct_equals(::x10aux::nullCheck(subCellRegion__27385)->FMGL(rank),
                                                                             ((x10_long)3ll))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::pme::PME_SPMD_Strings::sl__65893))));
            }
            ::au::edu::anu::pme::PME_SPMD::getSubcellHaloRegionForPlace(
              gridSize__27381, numSubCells__27382, splineOrder__27383,
              gridRegion__27384, subCellRegion__27385);
        }))
        ;
        
        //#line 480 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< x10_double >* iSpline = ::x10::lang::Rail< x10_double >::_make(((x10_long)(this->FMGL(splineOrder))));
        
        //#line 481 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< x10_double >* jSpline = ::x10::lang::Rail< x10_double >::_make(((x10_long)(this->FMGL(splineOrder))));
        
        //#line 482 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Rail< x10_double >* kSpline = ::x10::lang::Rail< x10_double >::_make(((x10_long)(this->FMGL(splineOrder))));
        
        //#line 484 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long qiMin = ::x10aux::nullCheck(localGridRegion)->min(
                           ((x10_long)0ll));
        
        //#line 485 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long qiMax = ::x10aux::nullCheck(localGridRegion)->max(
                           ((x10_long)0ll));
        
        //#line 486 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long qjMin = ::x10aux::nullCheck(localGridRegion)->min(
                           ((x10_long)1ll));
        
        //#line 487 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long qjMax = ::x10aux::nullCheck(localGridRegion)->max(
                           ((x10_long)1ll));
        
        //#line 489 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::regionarray::Region* p__59431 = subCellHaloRegion;
        x10_long z__29574min__59432 = ::x10aux::nullCheck(p__59431)->min(
                                        ((x10_long)2ll));
        x10_long z__29574max__59433 = ::x10aux::nullCheck(p__59431)->max(
                                        ((x10_long)2ll));
        x10_long y__29593min__59434 = ::x10aux::nullCheck(p__59431)->min(
                                        ((x10_long)1ll));
        x10_long y__29593max__59435 = ::x10aux::nullCheck(p__59431)->max(
                                        ((x10_long)1ll));
        x10_long x__29612min__59436 = ::x10aux::nullCheck(p__59431)->min(
                                        ((x10_long)0ll));
        x10_long x__29612max__59437 = ::x10aux::nullCheck(p__59431)->max(
                                        ((x10_long)0ll));
        {
            x10_long x__59438;
            for (x__59438 = x__29612min__59436; ((x__59438) <= (x__29612max__59437));
                 x__59438 = ((x__59438) + (((x10_long)1ll))))
            {
                x10_long x__59439 = x__59438;
                {
                    x10_long y__59440;
                    for (y__59440 = y__29593min__59434; ((y__59440) <= (y__29593max__59435));
                         y__59440 = ((y__59440) + (((x10_long)1ll))))
                    {
                        x10_long y__59441 = y__59440;
                        {
                            x10_long z__59442;
                            for (z__59442 = z__29574min__59432;
                                 ((z__59442) <= (z__29574max__59433));
                                 z__59442 = ((z__59442) + (((x10_long)1ll))))
                            {
                                x10_long z__59443 = z__59442;
                                
                                //#line 490 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* thisCell__59426 =
                                  (__extension__ ({
                                    
                                    //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__59427 = x__59439;
                                    x10_long i__59428 = y__59441;
                                    x10_long i__59429 = z__59443;
                                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__59430;
                                    
                                    //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__59430 = ::x10aux::nullCheck(myAtomsCache)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                                   (__extension__ ({
                                                       
                                                       //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__59315 =
                                                         i__59427;
                                                       x10_long i__59316 =
                                                         i__59428;
                                                       x10_long i__59317 =
                                                         i__59429;
                                                       x10_long ret__59318;
                                                       
                                                       //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long offset__59314 =
                                                         ((i__59315) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min0)));
                                                       
                                                       //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__59314 =
                                                         ((((((offset__59314) * (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_stride1)))) + (i__59316))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min1)));
                                                       
                                                       //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__59314 =
                                                         ((((((offset__59314) * (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                   ((x10_long)0ll))))) + (i__59317))) - (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)1ll))));
                                                       
                                                       //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       ret__59318 =
                                                         offset__59314;
                                                       ret__59318;
                                                   }))
                                                   );
                                    ret__59430;
                                }))
                                ;
                                
                                //#line 491 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                x10_long i__29555max__59423 =
                                  (((x10_long)(::x10aux::nullCheck(thisCell__59426)->FMGL(size))) - (((x10_long)1ll)));
                                {
                                    x10_long i__59424;
                                    for (i__59424 = ((x10_long)0ll);
                                         ((i__59424) <= (i__29555max__59423));
                                         i__59424 = ((i__59424) + (((x10_long)1ll))))
                                    {
                                        x10_long atomIndex__59425 =
                                          i__59424;
                                        
                                        //#line 492 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::au::edu::anu::chem::PointCharge atom__59409 =
                                          ::x10aux::nullCheck(thisCell__59426)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                            atomIndex__59425);
                                        
                                        //#line 493 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double q__59410 =
                                          atom__59409->FMGL(charge);
                                        
                                        //#line 494 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10x::vector::Point3d u__59411 =
                                          (__extension__ ({
                                            ::x10x::vector::Point3d this__59412 =
                                              (__extension__ ({
                                                ::x10x::vector::Point3d this__59413 =
                                                  atom__59409->FMGL(centre);
                                                
                                                //#line 50 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                ::x10x::vector::Vector3d v__59414 =
                                                  this->FMGL(scalingVector);
                                                (__extension__ ({
                                                    
                                                    //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Point3d alloc__59415 =
                                                       ::x10x::vector::Point3d::_alloc();
                                                    
                                                    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    x10_double i__59319 =
                                                      ((this__59413->FMGL(i)) * (v__59414->FMGL(i)));
                                                    x10_double j__59320 =
                                                      ((this__59413->FMGL(j)) * (v__59414->FMGL(j)));
                                                    x10_double k__59321 =
                                                      ((this__59413->FMGL(k)) * (v__59414->FMGL(k)));
                                                    
                                                    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    alloc__59415->FMGL(i) =
                                                      i__59319;
                                                    alloc__59415->FMGL(j) =
                                                      j__59320;
                                                    alloc__59415->FMGL(k) =
                                                      k__59321;
                                                    alloc__59415;
                                                }))
                                                ;
                                            }))
                                            ;
                                            
                                            //#line 31 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                            ::x10x::vector::Vector3d that__59416 =
                                              (__extension__ ({
                                                
                                                //#line 494 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10x::vector::Vector3d alloc__59417 =
                                                   ::x10x::vector::Vector3d::_alloc();
                                                
                                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double i__59322 =
                                                  this->FMGL(K1);
                                                x10_double j__59323 =
                                                  this->FMGL(K2);
                                                x10_double k__59324 =
                                                  this->FMGL(K3);
                                                
                                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                alloc__59417->FMGL(i) =
                                                  i__59322;
                                                alloc__59417->FMGL(j) =
                                                  j__59323;
                                                alloc__59417->FMGL(k) =
                                                  k__59324;
                                                alloc__59417;
                                            }))
                                            ;
                                            (__extension__ ({
                                                
                                                //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                ::x10x::vector::Vector3d b__59418 =
                                                  that__59416;
                                                (__extension__ ({
                                                    
                                                    //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Point3d alloc__59419 =
                                                       ::x10x::vector::Point3d::_alloc();
                                                    
                                                    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    x10_double i__59325 =
                                                      ((this__59412->FMGL(i)) + (b__59418->FMGL(i)));
                                                    x10_double j__59326 =
                                                      ((this__59412->FMGL(j)) + (b__59418->FMGL(j)));
                                                    x10_double k__59327 =
                                                      ((this__59412->FMGL(k)) + (b__59418->FMGL(k)));
                                                    
                                                    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    alloc__59419->FMGL(i) =
                                                      i__59325;
                                                    alloc__59419->FMGL(j) =
                                                      j__59326;
                                                    alloc__59419->FMGL(k) =
                                                      k__59327;
                                                    alloc__59419;
                                                }))
                                                ;
                                            }))
                                            ;
                                        }))
                                        ;
                                        
                                        //#line 495 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_int u1i__59420 =
                                          ::x10::lang::DoubleNatives::toInt(u__59411->FMGL(i));
                                        
                                        //#line 583 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double offset__59397 =
                                          ((1.0) - (((u__59411->FMGL(i)) - (((x10_double) (u1i__59420))))));
                                        ::x10::lang::Rail< x10_double >* spline__59398 =
                                          iSpline;
                                        x10_int splineOrder__59399 =
                                          this->FMGL(splineOrder);
                                        
                                        //#line 584 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                          ((((x10_long)(splineOrder__59399))) - (((x10_long)1ll))),
                                          0.0);
                                        
                                        //#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)1ll),
                                          offset__59397);
                                        
                                        //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)0ll),
                                          ((1.0) - (offset__59397)));
                                        
                                        //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29709max__59332 =
                                          ((((x10_long)(splineOrder__59399))) - (((x10_long)1ll)));
                                        {
                                            x10_long i__59333;
                                            for (i__59333 =
                                                   ((x10_long)3ll);
                                                 ((i__59333) <= (i__29709max__59332));
                                                 i__59333 =
                                                   ((i__59333) + (((x10_long)1ll))))
                                            {
                                                x10_long k__59334 =
                                                  i__59333;
                                                
                                                //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_double div__59331 =
                                                  ((1.0) / (((((x10_double) (k__59334))) - (1.0))));
                                                
                                                //#line 590 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                                  ((k__59334) - (((x10_long)1ll))),
                                                  ((((div__59331) * (offset__59397))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                           ((k__59334) - (((x10_long)2ll)))))));
                                                
                                                //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_long i__29691max__59328 =
                                                  ((k__59334) - (((x10_long)2ll)));
                                                {
                                                    x10_long i__59329;
                                                    for (i__59329 =
                                                           ((x10_long)1ll);
                                                         ((i__59329) <= (i__29691max__59328));
                                                         i__59329 =
                                                           ((i__59329) + (((x10_long)1ll))))
                                                    {
                                                        x10_long l__59330 =
                                                          i__59329;
                                                        
                                                        //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                                          ((((k__59334) - (l__59330))) - (((x10_long)1ll))),
                                                          ((div__59331) * (((((((offset__59397) + (((x10_double) (l__59330))))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                     ((((k__59334) - (l__59330))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__59334) - (l__59330))))) - (offset__59397))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                       ((((k__59334) - (l__59330))) - (((x10_long)1ll)))))))))));
                                                    }
                                                }
                                                
                                                //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                                  ((x10_long)0ll),
                                                  ((((div__59331) * (((1.0) - (offset__59397))))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                                       ((x10_long)0ll)))));
                                            }
                                        }
                                        
                                        //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double div__59338 =
                                          ((1.0) / (((x10_double) (((((x10_long)(splineOrder__59399))) - (((x10_long)1ll)))))));
                                        
                                        //#line 598 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                          ((((x10_long)(splineOrder__59399))) - (((x10_long)1ll))),
                                          ((((div__59338) * (offset__59397))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                   ((((x10_long)(splineOrder__59399))) - (((x10_long)2ll)))))));
                                        
                                        //#line 599 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29727max__59335 =
                                          ((((x10_long)(splineOrder__59399))) - (((x10_long)2ll)));
                                        {
                                            x10_long i__59336;
                                            for (i__59336 =
                                                   ((x10_long)1ll);
                                                 ((i__59336) <= (i__29727max__59335));
                                                 i__59336 =
                                                   ((i__59336) + (((x10_long)1ll))))
                                            {
                                                x10_long l__59337 =
                                                  i__59336;
                                                
                                                //#line 600 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                                  ((((((x10_long)(splineOrder__59399))) - (l__59337))) - (((x10_long)1ll))),
                                                  ((div__59338) * (((((((offset__59397) + (((x10_double) (l__59337))))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                             ((((((x10_long)(splineOrder__59399))) - (l__59337))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder__59399))) - (l__59337))))) - (offset__59397))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                                                               ((((((x10_long)(splineOrder__59399))) - (l__59337))) - (((x10_long)1ll)))))))))));
                                            }
                                        }
                                        
                                        //#line 603 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)0ll),
                                          ((((div__59338) * (((1.0) - (offset__59397))))) * (::x10aux::nullCheck(spline__59398)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ((x10_long)0ll)))));
                                        
                                        //#line 497 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_int u2i__59421 =
                                          ::x10::lang::DoubleNatives::toInt(u__59411->FMGL(j));
                                        
                                        //#line 583 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double offset__59400 =
                                          ((1.0) - (((u__59411->FMGL(j)) - (((x10_double) (u2i__59421))))));
                                        ::x10::lang::Rail< x10_double >* spline__59401 =
                                          jSpline;
                                        x10_int splineOrder__59402 =
                                          this->FMGL(splineOrder);
                                        
                                        //#line 584 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                          ((((x10_long)(splineOrder__59402))) - (((x10_long)1ll))),
                                          0.0);
                                        
                                        //#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)1ll),
                                          offset__59400);
                                        
                                        //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)0ll),
                                          ((1.0) - (offset__59400)));
                                        
                                        //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29709max__59343 =
                                          ((((x10_long)(splineOrder__59402))) - (((x10_long)1ll)));
                                        {
                                            x10_long i__59344;
                                            for (i__59344 =
                                                   ((x10_long)3ll);
                                                 ((i__59344) <= (i__29709max__59343));
                                                 i__59344 =
                                                   ((i__59344) + (((x10_long)1ll))))
                                            {
                                                x10_long k__59345 =
                                                  i__59344;
                                                
                                                //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_double div__59342 =
                                                  ((1.0) / (((((x10_double) (k__59345))) - (1.0))));
                                                
                                                //#line 590 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                                  ((k__59345) - (((x10_long)1ll))),
                                                  ((((div__59342) * (offset__59400))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                           ((k__59345) - (((x10_long)2ll)))))));
                                                
                                                //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_long i__29691max__59339 =
                                                  ((k__59345) - (((x10_long)2ll)));
                                                {
                                                    x10_long i__59340;
                                                    for (i__59340 =
                                                           ((x10_long)1ll);
                                                         ((i__59340) <= (i__29691max__59339));
                                                         i__59340 =
                                                           ((i__59340) + (((x10_long)1ll))))
                                                    {
                                                        x10_long l__59341 =
                                                          i__59340;
                                                        
                                                        //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                                          ((((k__59345) - (l__59341))) - (((x10_long)1ll))),
                                                          ((div__59342) * (((((((offset__59400) + (((x10_double) (l__59341))))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                     ((((k__59345) - (l__59341))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__59345) - (l__59341))))) - (offset__59400))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                       ((((k__59345) - (l__59341))) - (((x10_long)1ll)))))))))));
                                                    }
                                                }
                                                
                                                //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                                  ((x10_long)0ll),
                                                  ((((div__59342) * (((1.0) - (offset__59400))))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                                       ((x10_long)0ll)))));
                                            }
                                        }
                                        
                                        //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double div__59349 =
                                          ((1.0) / (((x10_double) (((((x10_long)(splineOrder__59402))) - (((x10_long)1ll)))))));
                                        
                                        //#line 598 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                          ((((x10_long)(splineOrder__59402))) - (((x10_long)1ll))),
                                          ((((div__59349) * (offset__59400))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                   ((((x10_long)(splineOrder__59402))) - (((x10_long)2ll)))))));
                                        
                                        //#line 599 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29727max__59346 =
                                          ((((x10_long)(splineOrder__59402))) - (((x10_long)2ll)));
                                        {
                                            x10_long i__59347;
                                            for (i__59347 =
                                                   ((x10_long)1ll);
                                                 ((i__59347) <= (i__29727max__59346));
                                                 i__59347 =
                                                   ((i__59347) + (((x10_long)1ll))))
                                            {
                                                x10_long l__59348 =
                                                  i__59347;
                                                
                                                //#line 600 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                                  ((((((x10_long)(splineOrder__59402))) - (l__59348))) - (((x10_long)1ll))),
                                                  ((div__59349) * (((((((offset__59400) + (((x10_double) (l__59348))))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                             ((((((x10_long)(splineOrder__59402))) - (l__59348))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder__59402))) - (l__59348))))) - (offset__59400))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                                                               ((((((x10_long)(splineOrder__59402))) - (l__59348))) - (((x10_long)1ll)))))))))));
                                            }
                                        }
                                        
                                        //#line 603 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)0ll),
                                          ((((div__59349) * (((1.0) - (offset__59400))))) * (::x10aux::nullCheck(spline__59401)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ((x10_long)0ll)))));
                                        
                                        //#line 499 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_int u3i__59422 =
                                          ::x10::lang::DoubleNatives::toInt(u__59411->FMGL(k));
                                        
                                        //#line 583 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double offset__59403 =
                                          ((1.0) - (((u__59411->FMGL(k)) - (((x10_double) (u3i__59422))))));
                                        ::x10::lang::Rail< x10_double >* spline__59404 =
                                          kSpline;
                                        x10_int splineOrder__59405 =
                                          this->FMGL(splineOrder);
                                        
                                        //#line 584 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                          ((((x10_long)(splineOrder__59405))) - (((x10_long)1ll))),
                                          0.0);
                                        
                                        //#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)1ll),
                                          offset__59403);
                                        
                                        //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)0ll),
                                          ((1.0) - (offset__59403)));
                                        
                                        //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29709max__59354 =
                                          ((((x10_long)(splineOrder__59405))) - (((x10_long)1ll)));
                                        {
                                            x10_long i__59355;
                                            for (i__59355 =
                                                   ((x10_long)3ll);
                                                 ((i__59355) <= (i__29709max__59354));
                                                 i__59355 =
                                                   ((i__59355) + (((x10_long)1ll))))
                                            {
                                                x10_long k__59356 =
                                                  i__59355;
                                                
                                                //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_double div__59353 =
                                                  ((1.0) / (((((x10_double) (k__59356))) - (1.0))));
                                                
                                                //#line 590 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                                  ((k__59356) - (((x10_long)1ll))),
                                                  ((((div__59353) * (offset__59403))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                           ((k__59356) - (((x10_long)2ll)))))));
                                                
                                                //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_long i__29691max__59350 =
                                                  ((k__59356) - (((x10_long)2ll)));
                                                {
                                                    x10_long i__59351;
                                                    for (i__59351 =
                                                           ((x10_long)1ll);
                                                         ((i__59351) <= (i__29691max__59350));
                                                         i__59351 =
                                                           ((i__59351) + (((x10_long)1ll))))
                                                    {
                                                        x10_long l__59352 =
                                                          i__59351;
                                                        
                                                        //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                        ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                                          ((((k__59356) - (l__59352))) - (((x10_long)1ll))),
                                                          ((div__59353) * (((((((offset__59403) + (((x10_double) (l__59352))))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                     ((((k__59356) - (l__59352))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__59356) - (l__59352))))) - (offset__59403))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                       ((((k__59356) - (l__59352))) - (((x10_long)1ll)))))))))));
                                                    }
                                                }
                                                
                                                //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                                  ((x10_long)0ll),
                                                  ((((div__59353) * (((1.0) - (offset__59403))))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                                       ((x10_long)0ll)))));
                                            }
                                        }
                                        
                                        //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_double div__59360 =
                                          ((1.0) / (((x10_double) (((((x10_long)(splineOrder__59405))) - (((x10_long)1ll)))))));
                                        
                                        //#line 598 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                          ((((x10_long)(splineOrder__59405))) - (((x10_long)1ll))),
                                          ((((div__59360) * (offset__59403))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                   ((((x10_long)(splineOrder__59405))) - (((x10_long)2ll)))))));
                                        
                                        //#line 599 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29727max__59357 =
                                          ((((x10_long)(splineOrder__59405))) - (((x10_long)2ll)));
                                        {
                                            x10_long i__59358;
                                            for (i__59358 =
                                                   ((x10_long)1ll);
                                                 ((i__59358) <= (i__29727max__59357));
                                                 i__59358 =
                                                   ((i__59358) + (((x10_long)1ll))))
                                            {
                                                x10_long l__59359 =
                                                  i__59358;
                                                
                                                //#line 600 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                                  ((((((x10_long)(splineOrder__59405))) - (l__59359))) - (((x10_long)1ll))),
                                                  ((div__59360) * (((((((offset__59403) + (((x10_double) (l__59359))))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                             ((((((x10_long)(splineOrder__59405))) - (l__59359))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder__59405))) - (l__59359))))) - (offset__59403))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                                                               ((((((x10_long)(splineOrder__59405))) - (l__59359))) - (((x10_long)1ll)))))))))));
                                            }
                                        }
                                        
                                        //#line 603 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        ::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__set(
                                          ((x10_long)0ll),
                                          ((((div__59360) * (((1.0) - (offset__59403))))) * (::x10aux::nullCheck(spline__59404)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ((x10_long)0ll)))));
                                        
                                        //#line 501 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                        x10_long i__29537max__59406 =
                                          ((((x10_long)(this->FMGL(splineOrder)))) - (((x10_long)1ll)));
                                        {
                                            x10_long i__59407;
                                            for (i__59407 =
                                                   ((x10_long)0ll);
                                                 ((i__59407) <= (i__29537max__59406));
                                                 i__59407 =
                                                   ((i__59407) + (((x10_long)1ll))))
                                            {
                                                x10_long i__59408 =
                                                  i__59407;
                                                
                                                //#line 502 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_long k__59395 =
                                                  ((((((((x10_long)(u1i__59420))) - (i__59408))) + (gridSize0))) % ::x10aux::zeroCheck(gridSize0));
                                                
                                                //#line 503 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                x10_double iVal__59396 =
                                                  ((q__59410) * (iSpline->x10::lang::Rail< x10_double >::__apply(
                                                                   i__59408)));
                                                
                                                //#line 504 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                if ((((k__59395) >= (qiMin)) &&
                                                    ((k__59395) <= (qiMax))))
                                                {
                                                    
                                                    //#line 505 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                    x10_long i__29519max__59392 =
                                                      ((((x10_long)(this->FMGL(splineOrder)))) - (((x10_long)1ll)));
                                                    {
                                                        x10_long i__59393;
                                                        for (i__59393 =
                                                               ((x10_long)0ll);
                                                             ((i__59393) <= (i__29519max__59392));
                                                             i__59393 =
                                                               ((i__59393) + (((x10_long)1ll))))
                                                        {
                                                            x10_long j__59394 =
                                                              i__59393;
                                                            
                                                            //#line 506 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                            x10_long k__59390 =
                                                              ((((((((x10_long)(u2i__59421))) - (j__59394))) + (gridSize1))) % ::x10aux::zeroCheck(gridSize1));
                                                            
                                                            //#line 507 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                            x10_double jVal__59391 =
                                                              ((iVal__59396) * (jSpline->x10::lang::Rail< x10_double >::__apply(
                                                                                  j__59394)));
                                                            
                                                            //#line 508 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                            if ((((k__59390) >= (qjMin)) &&
                                                                ((k__59390) <= (qjMax))))
                                                            {
                                                                
                                                                //#line 509 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                                x10_long i__29501max__59387 =
                                                                  ((((x10_long)(this->FMGL(splineOrder)))) - (((x10_long)1ll)));
                                                                {
                                                                    x10_long i__59388;
                                                                    for (i__59388 =
                                                                           ((x10_long)0ll);
                                                                         ((i__59388) <= (i__29501max__59387));
                                                                         i__59388 =
                                                                           ((i__59388) + (((x10_long)1ll))))
                                                                    {
                                                                        x10_long k__59389 =
                                                                          i__59388;
                                                                        
                                                                        //#line 510 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                                        x10_long k__59385 =
                                                                          ((((((((x10_long)(u3i__59422))) - (k__59389))) + (gridSize2))) % ::x10aux::zeroCheck(gridSize2));
                                                                        
                                                                        //#line 511 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                                        x10_double kVal__59386 =
                                                                          ((jVal__59391) * (kSpline->x10::lang::Rail< x10_double >::__apply(
                                                                                              k__59389)));
                                                                        
                                                                        //#line 512 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                                                                        ::x10::regionarray::Array<x10_double>* a__59376 =
                                                                          qLocal;
                                                                        x10_long i__59377 =
                                                                          k__59395;
                                                                        x10_long i__59378 =
                                                                          k__59390;
                                                                        x10_long i__59379 =
                                                                          k__59385;
                                                                        x10_double r__59380 =
                                                                          (((__extension__ ({
                                                                            
                                                                            //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                            x10_long i__59381 =
                                                                              i__59377;
                                                                            x10_long i__59382 =
                                                                              i__59378;
                                                                            x10_long i__59383 =
                                                                              i__59379;
                                                                            x10_double ret__59384;
                                                                            
                                                                            //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                            ret__59384 =
                                                                              ::x10aux::nullCheck(a__59376)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                                                (__extension__ ({
                                                                                    
                                                                                    //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                    x10_long i__59362 =
                                                                                      i__59381;
                                                                                    x10_long i__59363 =
                                                                                      i__59382;
                                                                                    x10_long i__59364 =
                                                                                      i__59383;
                                                                                    x10_long ret__59365;
                                                                                    
                                                                                    //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                    x10_long offset__59361 =
                                                                                      ((i__59362) - (::x10aux::nullCheck(a__59376)->FMGL(layout_min0)));
                                                                                    
                                                                                    //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                    offset__59361 =
                                                                                      ((((((offset__59361) * (::x10aux::nullCheck(a__59376)->FMGL(layout_stride1)))) + (i__59363))) - (::x10aux::nullCheck(a__59376)->FMGL(layout_min1)));
                                                                                    
                                                                                    //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                    offset__59361 =
                                                                                      ((((((offset__59361) * (::x10aux::nullCheck(::x10aux::nullCheck(a__59376)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                ((x10_long)0ll))))) + (i__59364))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__59376)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                        ((x10_long)1ll))));
                                                                                    
                                                                                    //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                    ret__59365 =
                                                                                      offset__59361;
                                                                                    ret__59365;
                                                                                }))
                                                                                );
                                                                            ret__59384;
                                                                        }))
                                                                        ) + (kVal__59386));
                                                                        
                                                                        //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                        x10_long i__59371 =
                                                                          i__59377;
                                                                        x10_long i__59372 =
                                                                          i__59378;
                                                                        x10_long i__59373 =
                                                                          i__59379;
                                                                        x10_double v__59374 =
                                                                          r__59380;
                                                                        x10_double ret__59375;
                                                                        
                                                                        //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                        ::x10aux::nullCheck(a__59376)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                                                          (__extension__ ({
                                                                              
                                                                              //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                              x10_long i__59367 =
                                                                                i__59371;
                                                                              x10_long i__59368 =
                                                                                i__59372;
                                                                              x10_long i__59369 =
                                                                                i__59373;
                                                                              x10_long ret__59370;
                                                                              
                                                                              //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                              x10_long offset__59366 =
                                                                                ((i__59367) - (::x10aux::nullCheck(a__59376)->FMGL(layout_min0)));
                                                                              
                                                                              //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                              offset__59366 =
                                                                                ((((((offset__59366) * (::x10aux::nullCheck(a__59376)->FMGL(layout_stride1)))) + (i__59368))) - (::x10aux::nullCheck(a__59376)->FMGL(layout_min1)));
                                                                              
                                                                              //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                              offset__59366 =
                                                                                ((((((offset__59366) * (::x10aux::nullCheck(::x10aux::nullCheck(a__59376)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                          ((x10_long)0ll))))) + (i__59369))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__59376)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                  ((x10_long)1ll))));
                                                                              
                                                                              //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                              ret__59370 =
                                                                                offset__59366;
                                                                              ret__59370;
                                                                          }))
                                                                          ,
                                                                          v__59374);
                                                                        
                                                                        //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                        ret__59375 =
                                                                          v__59374;
                                                                        
                                                                        //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                        ret__59375;
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
    
    //#line 522 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
      ((x10_long)(((x10_int)1))));
}

//#line 531 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
::x10::regionarray::Region* au::edu::anu::pme::PME_SPMD::getSubcellHaloRegionForPlace(
  x10_long gridSize, x10_long numSubCells, x10_int splineOrder,
  ::x10::regionarray::Region* gridRegion, ::x10::regionarray::Region* subCellRegion) {
    
    //#line 532 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double gridPointsPerSubCell = ((((x10_double) (gridSize))) / (((x10_double) (numSubCells))));
    
    //#line 534 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_int subCellMinX = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::floor(((((x10_double) (::x10aux::nullCheck(gridRegion)->min(
                                                                                                               ((x10_long)0ll))))) / (gridPointsPerSubCell))));
    
    //#line 536 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_boolean fullX = ((::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->min(
                                                    ((x10_long)0ll)),
                                                  ((x10_long)0ll))) &&
    (::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->max(
                               ((x10_long)0ll)), ((gridSize) - (((x10_long)1ll))))));
    
    //#line 537 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long subCellMaxX;
    
    //#line 538 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if (fullX) {
        
        //#line 539 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        subCellMaxX = ::x10aux::nullCheck(subCellRegion)->max(
                        ((x10_long)0ll));
    } else {
        
        //#line 541 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long maxX = ((::x10aux::nullCheck(gridRegion)->max(
                            ((x10_long)0ll))) + (((((x10_long)(splineOrder))) - (((x10_long)1ll)))));
        
        //#line 542 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        subCellMaxX = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((((x10_double) (maxX))) / (gridPointsPerSubCell))));
    }
    
    //#line 545 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long subCellMinY = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::floor(((((x10_double) (::x10aux::nullCheck(gridRegion)->min(
                                                                                                                 ((x10_long)1ll))))) / (gridPointsPerSubCell))));
    
    //#line 546 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_boolean fullY = ((::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->min(
                                                    ((x10_long)1ll)),
                                                  ((x10_long)0ll))) &&
    (::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->max(
                               ((x10_long)1ll)), ((gridSize) - (((x10_long)1ll))))));
    
    //#line 547 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long subCellMaxY;
    
    //#line 548 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if (fullY) {
        
        //#line 549 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        subCellMaxY = ::x10aux::nullCheck(subCellRegion)->max(
                        ((x10_long)1ll));
    } else {
        
        //#line 551 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        x10_long maxY = ((::x10aux::nullCheck(gridRegion)->max(
                            ((x10_long)1ll))) + (((((x10_long)(splineOrder))) - (((x10_long)1ll)))));
        
        //#line 552 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        subCellMaxY = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((((x10_double) (maxY))) / (gridPointsPerSubCell))));
    }
    
    //#line 555 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* subCellHaloRegion = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__58050 = ::x10::lang::LongRange::_make(((x10_long)(subCellMinX)), subCellMaxX);
        ::x10::lang::LongRange r__58051 = ::x10::lang::LongRange::_make(subCellMinY, subCellMaxY);
        ::x10::lang::LongRange r__58052 = ::x10::lang::LongRange::_make(::x10aux::nullCheck(subCellRegion)->min(
                                                                          ((x10_long)2ll)), ::x10aux::nullCheck(subCellRegion)->max(
                                                                                              ((x10_long)2ll)));
        ::x10::regionarray::Region::makeRectangular(r__58050,
                                                    r__58051,
                                                    r__58052);
    }))
    ;
    
    //#line 559 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return subCellHaloRegion;
    
}

//#line 565 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::getReciprocalEnergy(
  ::x10::regionarray::DistArray<x10_double>* thetaRecConvQ) {
    
    //#line 566 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::start(
      ((x10_long)(((x10_int)4))));
    
    //#line 568 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double scale = ((1.0) / (((((this->FMGL(K1)) * (this->FMGL(K2)))) * (this->FMGL(K3)))));
    
    //#line 569 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double myReciprocalEnergy = 0.0;
    
    //#line 570 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array<x10_double>* localQ = ::x10aux::nullCheck(this->FMGL(Q))->x10::regionarray::DistArray<x10_double>::getLocalPortion();
    
    //#line 571 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Array<x10_double>* localThetaRecConvQ =
      ::x10aux::nullCheck(thetaRecConvQ)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
    
    //#line 572 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localQ)->FMGL(region);
    
    //#line 573 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::Region* p__59462 = localRegion;
    x10_long k__29633min__59463 = ::x10aux::nullCheck(p__59462)->min(
                                    ((x10_long)2ll));
    x10_long k__29633max__59464 = ::x10aux::nullCheck(p__59462)->max(
                                    ((x10_long)2ll));
    x10_long j__29652min__59465 = ::x10aux::nullCheck(p__59462)->min(
                                    ((x10_long)1ll));
    x10_long j__29652max__59466 = ::x10aux::nullCheck(p__59462)->max(
                                    ((x10_long)1ll));
    x10_long i__29671min__59467 = ::x10aux::nullCheck(p__59462)->min(
                                    ((x10_long)0ll));
    x10_long i__29671max__59468 = ::x10aux::nullCheck(p__59462)->max(
                                    ((x10_long)0ll));
    {
        x10_long i__59469;
        for (i__59469 = i__29671min__59467; ((i__59469) <= (i__29671max__59468));
             i__59469 = ((i__59469) + (((x10_long)1ll))))
        {
            x10_long i__59470 = i__59469;
            {
                x10_long j__59471;
                for (j__59471 = j__29652min__59465; ((j__59471) <= (j__29652max__59466));
                     j__59471 = ((j__59471) + (((x10_long)1ll))))
                {
                    x10_long j__59472 = j__59471;
                    {
                        x10_long k__59473;
                        for (k__59473 = k__29633min__59463;
                             ((k__59473) <= (k__29633max__59464));
                             k__59473 = ((k__59473) + (((x10_long)1ll))))
                        {
                            x10_long k__59474 = k__59473;
                            
                            //#line 574 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                            myReciprocalEnergy = ((myReciprocalEnergy) + ((((__extension__ ({
                                
                                //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__59454 = i__59470;
                                x10_long i__59455 = j__59472;
                                x10_long i__59456 = k__59474;
                                x10_double ret__59457;
                                
                                //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__59457 = ::x10aux::nullCheck(localQ)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long i__59445 =
                                                     i__59454;
                                                   x10_long i__59446 =
                                                     i__59455;
                                                   x10_long i__59447 =
                                                     i__59456;
                                                   x10_long ret__59448;
                                                   
                                                   //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__59444 =
                                                     ((i__59445) - (::x10aux::nullCheck(localQ)->FMGL(layout_min0)));
                                                   
                                                   //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   offset__59444 =
                                                     ((((((offset__59444) * (::x10aux::nullCheck(localQ)->FMGL(layout_stride1)))) + (i__59446))) - (::x10aux::nullCheck(localQ)->FMGL(layout_min1)));
                                                   
                                                   //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   offset__59444 =
                                                     ((((((offset__59444) * (::x10aux::nullCheck(::x10aux::nullCheck(localQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                               ((x10_long)0ll))))) + (i__59447))) - (::x10aux::nullCheck(::x10aux::nullCheck(localQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)1ll))));
                                                   
                                                   //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__59448 =
                                                     offset__59444;
                                                   ret__59448;
                                               }))
                                               );
                                ret__59457;
                            }))
                            ) * ((__extension__ ({
                                
                                //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__59458 = i__59470;
                                x10_long i__59459 = j__59472;
                                x10_long i__59460 = k__59474;
                                x10_double ret__59461;
                                
                                //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__59461 = ::x10aux::nullCheck(localThetaRecConvQ)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long i__59450 =
                                                     i__59458;
                                                   x10_long i__59451 =
                                                     i__59459;
                                                   x10_long i__59452 =
                                                     i__59460;
                                                   x10_long ret__59453;
                                                   
                                                   //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__59449 =
                                                     ((i__59450) - (::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout_min0)));
                                                   
                                                   //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   offset__59449 =
                                                     ((((((offset__59449) * (::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout_stride1)))) + (i__59451))) - (::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout_min1)));
                                                   
                                                   //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   offset__59449 =
                                                     ((((((offset__59449) * (::x10aux::nullCheck(::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                               ((x10_long)0ll))))) + (i__59452))) - (::x10aux::nullCheck(::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)1ll))));
                                                   
                                                   //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__59453 =
                                                     offset__59449;
                                                   ret__59453;
                                               }))
                                               );
                                ret__59461;
                            }))
                            ))));
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 577 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double reciprocalEnergy = ((((scale) * (myReciprocalEnergy))) / (2.0));
    
    //#line 578 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()->au::edu::anu::util::Timer::stop(
      ((x10_long)(((x10_int)4))));
    
    //#line 580 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return reciprocalEnergy;
    
}

//#line 583 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::fillSpline(x10_double offset,
                                             ::x10::lang::Rail< x10_double >* spline,
                                             x10_int splineOrder) {
    
    //#line 584 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((((x10_long)(splineOrder))) - (((x10_long)1ll))), 0.0);
    
    //#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((x10_long)1ll), offset);
    
    //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((x10_long)0ll), ((1.0) - (offset)));
    
    //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long i__29709max__59479 = ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
    {
        x10_long i__59480;
        for (i__59480 = ((x10_long)3ll); ((i__59480) <= (i__29709max__59479));
             i__59480 = ((i__59480) + (((x10_long)1ll))))
        {
            x10_long k__59481 = i__59480;
            
            //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            x10_double div__59478 = ((1.0) / (((((x10_double) (k__59481))) - (1.0))));
            
            //#line 590 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
              ((k__59481) - (((x10_long)1ll))), ((((div__59478) * (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                  ((k__59481) - (((x10_long)2ll)))))));
            
            //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            x10_long i__29691max__59475 = ((k__59481) - (((x10_long)2ll)));
            {
                x10_long i__59476;
                for (i__59476 = ((x10_long)1ll); ((i__59476) <= (i__29691max__59475));
                     i__59476 = ((i__59476) + (((x10_long)1ll))))
                {
                    x10_long l__59477 = i__59476;
                    
                    //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
                    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
                      ((((k__59481) - (l__59477))) - (((x10_long)1ll))),
                      ((div__59478) * (((((((offset) + (((x10_double) (l__59477))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                          ((((k__59481) - (l__59477))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__59481) - (l__59477))))) - (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                     ((((k__59481) - (l__59477))) - (((x10_long)1ll)))))))))));
                }
            }
            
            //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
              ((x10_long)0ll), ((((div__59478) * (((1.0) - (offset))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                             ((x10_long)0ll)))));
        }
    }
    
    //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double div = ((1.0) / (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))));
    
    //#line 598 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((((x10_long)(splineOrder))) - (((x10_long)1ll))), ((((div) * (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                    ((((x10_long)(splineOrder))) - (((x10_long)2ll)))))));
    
    //#line 599 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_long i__29727max__59482 = ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
    {
        x10_long i__59483;
        for (i__59483 = ((x10_long)1ll); ((i__59483) <= (i__29727max__59482));
             i__59483 = ((i__59483) + (((x10_long)1ll))))
        {
            x10_long l__59484 = i__59483;
            
            //#line 600 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
            ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
              ((((((x10_long)(splineOrder))) - (l__59484))) - (((x10_long)1ll))),
              ((div) * (((((((offset) + (((x10_double) (l__59484))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                           ((((((x10_long)(splineOrder))) - (l__59484))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder))) - (l__59484))))) - (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                        ((((((x10_long)(splineOrder))) - (l__59484))) - (((x10_long)1ll)))))))))));
        }
    }
    
    //#line 603 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((x10_long)0ll), ((((div) * (((1.0) - (offset))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                              ((x10_long)0ll)))));
}

//#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::initBArray() {
    
    //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray<x10_double>* B = this->FMGL(B);
    
    //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_int splineOrder = this->FMGL(splineOrder);
    
    //#line 613 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K1 = this->FMGL(K1);
    
    //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K2 = this->FMGL(K2);
    
    //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K3 = this->FMGL(K3);
    {
        
        //#line 616 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59774 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__58075 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__58075)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__58075;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____59771;
                        for (__lowerer__var__1____59771 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____59771));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____59771));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__19)))au_edu_anu_pme_PME_SPMD__closure__19(splineOrder, B, K1, K2, K3, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc30) {
            {
                ::x10::lang::CheckedThrowable* ct__59772 =
                  __exc30;
                {
                    ::x10::lang::Runtime::pushException(ct__59772);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59774);
    }
}

//#line 654 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
void au::edu::anu::pme::PME_SPMD::initCArray() {
    
    //#line 655 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double V = this->getVolume();
    
    //#line 657 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::regionarray::DistArray<x10_double>* C = this->FMGL(C);
    
    //#line 658 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K1 = this->FMGL(K1);
    
    //#line 659 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K2 = this->FMGL(K2);
    
    //#line 660 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double K3 = this->FMGL(K3);
    
    //#line 661 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals =
      this->FMGL(edgeReciprocals);
    
    //#line 662 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    x10_double beta = this->FMGL(beta);
    {
        
        //#line 663 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59789 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__58948 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__58948)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__58948;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____59786;
                        for (__lowerer__var__1____59786 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____59786));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____59786));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__21)))au_edu_anu_pme_PME_SPMD__closure__21(C, K1, K2, K3, edgeReciprocals, beta, V, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc32) {
            {
                ::x10::lang::CheckedThrowable* ct__59787 =
                  __exc32;
                {
                    ::x10::lang::Runtime::pushException(ct__59787);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59789);
    }
    {
        
        //#line 674 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        ::x10::lang::Runtime::runAt(::x10aux::nullCheck(::x10aux::nullCheck(C)->FMGL(dist))->__apply(
                                      ((x10_long)0ll), ((x10_long)0ll),
                                      ((x10_long)0ll)), reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME_SPMD__closure__23)))au_edu_anu_pme_PME_SPMD__closure__23(C))),
                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 682 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::bSpline(x10_int n,
                                                x10_double u) {
    
    //#line 683 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((::x10aux::struct_equals(n, ((x10_int)4)))) {
        
        //#line 684 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ::au::edu::anu::pme::PME_SPMD::bSpline4(u);
        
    } else 
    //#line 685 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((((u) < (0.0)) || ((u) > (((x10_double) (n)))))) {
        
        //#line 686 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return 0.0;
        
    } else 
    //#line 687 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((::x10aux::struct_equals(n, ((x10_int)2)))) {
        
        //#line 688 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ((1.0) - (::fabs(((u) - (1.0)))));
        
    } else {
        
        //#line 690 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ((((((u) / (((x10_double) (((n) - (((x10_int)1)))))))) * (::au::edu::anu::pme::PME_SPMD::bSpline(
                                                                           ((n) - (((x10_int)1))),
                                                                           u)))) + (((((((((x10_double) (n))) - (u))) / (((x10_double) (((n) - (((x10_int)1)))))))) * (::au::edu::anu::pme::PME_SPMD::bSpline(
                                                                                                                                                                         ((n) - (((x10_int)1))),
                                                                                                                                                                         ((u) - (1.0)))))));
        
    }
    
}

//#line 697 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::bSpline4(x10_double u) {
    
    //#line 698 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((((u) <= (0.0)) || ((u) >= (((x10_double) (((x10_long)4ll)))))))
    {
        
        //#line 699 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return 0.0;
        
    } else {
        
        //#line 701 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ((((((u) / (((x10_double) (((x10_long)3ll)))))) * (::au::edu::anu::pme::PME_SPMD::bSpline3(
                                                                    u)))) + (((((((((x10_double) (((x10_long)4ll)))) - (u))) / (((x10_double) (((x10_long)3ll)))))) * (::au::edu::anu::pme::PME_SPMD::bSpline3(
                                                                                                                                                                         ((u) - (1.0)))))));
        
    }
    
}

//#line 708 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::bSpline3(x10_double u) {
    
    //#line 709 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((((u) <= (0.0)) || ((u) >= (((x10_double) (((x10_long)3ll)))))))
    {
        
        //#line 710 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return 0.0;
        
    } else {
        
        //#line 712 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ((((((u) / (((x10_double) (((x10_long)2ll)))))) * (::au::edu::anu::pme::PME_SPMD::bSpline2(
                                                                    u)))) + (((((((((x10_double) (((x10_long)3ll)))) - (u))) / (((x10_double) (((x10_long)2ll)))))) * (::au::edu::anu::pme::PME_SPMD::bSpline2(
                                                                                                                                                                         ((u) - (1.0)))))));
        
    }
    
}

//#line 719 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::bSpline2(x10_double u) {
    
    //#line 720 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    if ((((u) <= (0.0)) || ((u) >= (((x10_double) (((x10_long)2ll)))))))
    {
        
        //#line 721 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return 0.0;
        
    } else {
        
        //#line 723 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
        return ((1.0) - (::fabs(((u) - (1.0)))));
        
    }
    
}

//#line 730 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
x10_double au::edu::anu::pme::PME_SPMD::getVolume() {
    
    //#line 731 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    ::x10x::vector::Vector3d this__59582 = (__extension__ ({
        ::x10x::vector::Vector3d this__59583 = ::x10aux::nullCheck(this->FMGL(edges))->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                 ((x10_long)0ll));
        
        //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d vec__59584 = ::x10aux::nullCheck(this->FMGL(edges))->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                ((x10_long)1ll));
        (__extension__ ({
            
            //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d alloc__59585 =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double i__59579 = ((((this__59583->FMGL(j)) * (vec__59584->FMGL(k)))) - (((this__59583->FMGL(k)) * (vec__59584->FMGL(j)))));
            x10_double j__59580 = ((((this__59583->FMGL(k)) * (vec__59584->FMGL(i)))) - (((this__59583->FMGL(i)) * (vec__59584->FMGL(k)))));
            x10_double k__59581 = ((((this__59583->FMGL(i)) * (vec__59584->FMGL(j)))) - (((this__59583->FMGL(j)) * (vec__59584->FMGL(i)))));
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            alloc__59585->FMGL(i) = i__59579;
            alloc__59585->FMGL(j) = j__59580;
            alloc__59585->FMGL(k) = k__59581;
            alloc__59585;
        }))
        ;
    }))
    ;
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d vec__59586 = ::x10aux::nullCheck(this->FMGL(edges))->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                            ((x10_long)2ll));
    
    //#line 731 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
    return ((((((this__59582->FMGL(i)) * (vec__59586->FMGL(i)))) + (((this__59582->FMGL(j)) * (vec__59586->FMGL(j)))))) + (((this__59582->FMGL(k)) * (vec__59586->FMGL(k)))));
    
}

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME_SPMD.x10"
::au::edu::anu::pme::PME_SPMD* au::edu::anu::pme::PME_SPMD::au__edu__anu__pme__PME_SPMD____this__au__edu__anu__pme__PME_SPMD(
  ) {
    return this;
    
}
void au::edu::anu::pme::PME_SPMD::__fieldInitializers_au_edu_anu_pme_PME_SPMD(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::pme::PME_SPMD::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::pme::PME_SPMD::_deserializer);

void au::edu::anu::pme::PME_SPMD::_serialize_body(::x10aux::serialization_buffer& buf) {
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

::x10::lang::Reference* ::au::edu::anu::pme::PME_SPMD::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::pme::PME_SPMD* this_ = new (::x10aux::alloc_z< ::au::edu::anu::pme::PME_SPMD>()) ::au::edu::anu::pme::PME_SPMD();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::pme::PME_SPMD::_deserialize_body(::x10aux::deserialization_buffer& buf) {
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

::x10aux::RuntimeType au::edu::anu::pme::PME_SPMD::rtt;
void au::edu::anu::pme::PME_SPMD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.pme.PME_SPMD",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::pme::PME_SPMD_Strings::sl__65892(" is not an exact multiple of (cutoff/2.0) ");
::x10::lang::String au::edu::anu::pme::PME_SPMD_Strings::sl__65891("warning: edge length ");
::x10::lang::String au::edu::anu::pme::PME_SPMD_Strings::sl__65893("!(gridRegion$27384.rect == true && gridRegion$27384.rank == 3L && subCellRegion$27385.rect == true && subCellRegion$27385.rank == 3L)");

::x10::lang::Fun_0_1<x10_long, x10_double>::itable<au_edu_anu_pme_PME_SPMD__closure__1>au_edu_anu_pme_PME_SPMD__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__1::__apply, &au_edu_anu_pme_PME_SPMD__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >, &au_edu_anu_pme_PME_SPMD__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__1::_deserialize);

::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d>::itable<au_edu_anu_pme_PME_SPMD__closure__2>au_edu_anu_pme_PME_SPMD__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__2::__apply, &au_edu_anu_pme_PME_SPMD__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >, &au_edu_anu_pme_PME_SPMD__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__2::_deserialize);

::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>::itable<au_edu_anu_pme_PME_SPMD__closure__3>au_edu_anu_pme_PME_SPMD__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__3::__apply, &au_edu_anu_pme_PME_SPMD__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >, &au_edu_anu_pme_PME_SPMD__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__3::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__5>au_edu_anu_pme_PME_SPMD__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__5::__apply, &au_edu_anu_pme_PME_SPMD__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__5::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__4>au_edu_anu_pme_PME_SPMD__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__4::__apply, &au_edu_anu_pme_PME_SPMD__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_2<x10_double, x10_double, x10_double>::itable<au_edu_anu_pme_PME_SPMD__closure__6>au_edu_anu_pme_PME_SPMD__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__6::__apply, &au_edu_anu_pme_PME_SPMD__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >, &au_edu_anu_pme_PME_SPMD__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__6::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__8>au_edu_anu_pme_PME_SPMD__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__8::__apply, &au_edu_anu_pme_PME_SPMD__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__8::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__8::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__8::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__7>au_edu_anu_pme_PME_SPMD__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__7::__apply, &au_edu_anu_pme_PME_SPMD__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__7::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::itable<au_edu_anu_pme_PME_SPMD__closure__9>au_edu_anu_pme_PME_SPMD__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__9::__apply, &au_edu_anu_pme_PME_SPMD__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >, &au_edu_anu_pme_PME_SPMD__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__9::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__12>au_edu_anu_pme_PME_SPMD__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__12::__apply, &au_edu_anu_pme_PME_SPMD__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__12::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__11>au_edu_anu_pme_PME_SPMD__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__11::__apply, &au_edu_anu_pme_PME_SPMD__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__11::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__11::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__11::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__10>au_edu_anu_pme_PME_SPMD__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__10::__apply, &au_edu_anu_pme_PME_SPMD__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__10::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__10::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__10::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__14>au_edu_anu_pme_PME_SPMD__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__14::__apply, &au_edu_anu_pme_PME_SPMD__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__14::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__14::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__14::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__13>au_edu_anu_pme_PME_SPMD__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__13::__apply, &au_edu_anu_pme_PME_SPMD__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__13::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__13::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__13::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::itable<au_edu_anu_pme_PME_SPMD__closure__16>au_edu_anu_pme_PME_SPMD__closure__16::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__16::__apply, &au_edu_anu_pme_PME_SPMD__closure__16::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__16::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >, &au_edu_anu_pme_PME_SPMD__closure__16::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__16::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__16::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__15>au_edu_anu_pme_PME_SPMD__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__15::__apply, &au_edu_anu_pme_PME_SPMD__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__15::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__15::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__15::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::itable<au_edu_anu_pme_PME_SPMD__closure__17>au_edu_anu_pme_PME_SPMD__closure__17::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__17::__apply, &au_edu_anu_pme_PME_SPMD__closure__17::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__17::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >, &au_edu_anu_pme_PME_SPMD__closure__17::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__17::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__17::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__18>au_edu_anu_pme_PME_SPMD__closure__18::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__18::__apply, &au_edu_anu_pme_PME_SPMD__closure__18::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__18::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__18::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__18::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__18::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__18::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__18::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__20>au_edu_anu_pme_PME_SPMD__closure__20::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__20::__apply, &au_edu_anu_pme_PME_SPMD__closure__20::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__20::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__20::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__20::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__20::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__20::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__20::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__19>au_edu_anu_pme_PME_SPMD__closure__19::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__19::__apply, &au_edu_anu_pme_PME_SPMD__closure__19::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__19::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__19::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__19::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__19::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__19::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__19::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__22>au_edu_anu_pme_PME_SPMD__closure__22::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__22::__apply, &au_edu_anu_pme_PME_SPMD__closure__22::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__22::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__22::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__22::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__22::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__22::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__22::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__21>au_edu_anu_pme_PME_SPMD__closure__21::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__21::__apply, &au_edu_anu_pme_PME_SPMD__closure__21::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__21::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__21::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__21::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__21::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__21::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME_SPMD__closure__21::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME_SPMD__closure__23>au_edu_anu_pme_PME_SPMD__closure__23::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME_SPMD__closure__23::__apply, &au_edu_anu_pme_PME_SPMD__closure__23::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME_SPMD__closure__23::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME_SPMD__closure__23::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME_SPMD__closure__23::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME_SPMD__closure__23::_deserialize);

/* END of PME_SPMD */
/*************************************************/
