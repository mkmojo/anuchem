/*************************************************/
/* START of OctantId */
#include <au/edu/anu/mm/OctantId.h>

#include <x10/lang/Any.h>
#include <x10/lang/Comparable.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UInt.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Long.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 17 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::OctantId> {
public:
    static ::x10::lang::Any::itable< OctantId_ibox0 > itable;
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
::x10::lang::Any::itable< OctantId_ibox0 >  OctantId_ibox0::itable(&OctantId_ibox0::equals, &OctantId_ibox0::hashCode, &OctantId_ibox0::toString, &OctantId_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::OctantId >  au::edu::anu::mm::OctantId::_itable_0(&au::edu::anu::mm::OctantId::equals, &au::edu::anu::mm::OctantId::hashCode, &au::edu::anu::mm::OctantId::toString, &au::edu::anu::mm::OctantId::typeName);
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId_ibox1 : public ::x10::lang::IBox< ::au::edu::anu::mm::OctantId> {
public:
    static ::x10::lang::Comparable< ::au::edu::anu::mm::OctantId >::itable< OctantId_ibox1 > itable;
    x10_int compareTo(::au::edu::anu::mm::OctantId arg0) {
        return this->value->compareTo(arg0);
    }
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
::x10::lang::Comparable< ::au::edu::anu::mm::OctantId >::itable< OctantId_ibox1 >  OctantId_ibox1::itable(&OctantId_ibox1::compareTo, &OctantId_ibox1::equals, &OctantId_ibox1::hashCode, &OctantId_ibox1::toString, &OctantId_ibox1::typeName);
} } } } 
::x10::lang::Comparable< ::au::edu::anu::mm::OctantId >::itable< ::au::edu::anu::mm::OctantId >  au::edu::anu::mm::OctantId::_itable_1(&au::edu::anu::mm::OctantId::compareTo, &au::edu::anu::mm::OctantId::equals, &au::edu::anu::mm::OctantId::hashCode, &au::edu::anu::mm::OctantId::toString, &au::edu::anu::mm::OctantId::typeName);
::x10aux::itable_entry au::edu::anu::mm::OctantId::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::OctantId::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::OctantId > >, &au::edu::anu::mm::OctantId::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::OctantId")};
::x10aux::itable_entry au::edu::anu::mm::OctantId::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::OctantId_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::OctantId > >, &au::edu::anu::mm::OctantId_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::OctantId")};

//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
/** 
     * Return the top level of octants actually used in the method.
     * TODO This should be 0 for the periodic FMM and 2 for the non-periodic FMM.
     */

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"


//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_int au::edu::anu::mm::OctantId::compareTo(::au::edu::anu::mm::OctantId b) {
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_int levelComp = ::x10::lang::UByteNatives::compareTo((*this)->FMGL(level), b->FMGL(level));
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    if ((::x10aux::struct_equals(levelComp, ((x10_int)0)))) {
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        x10_ubyte cX = (__extension__ ({
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_ubyte p__70075 = ((x10_ubyte) (((*this)->FMGL(x)) ^ (b->FMGL(x))));
            x10_ubyte ret__70077;
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_ubyte i__70124 = ((x10_ubyte)0);
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            while (((p__70075) > (((x10_ubyte)1)))) {
                p__70075 = ((x10_ubyte) ((p__70075) >> (0x7 & (x10_int)(((x10_long)1ll)))));
                i__70124 = ((x10_ubyte) ((i__70124) + (((x10_ubyte)1))));
            }
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            ret__70077 = i__70124;
            ret__70077;
        }))
        ;
        
        //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        x10_ubyte cY = (__extension__ ({
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_ubyte p__70079 = ((x10_ubyte) (((*this)->FMGL(y)) ^ (b->FMGL(y))));
            x10_ubyte ret__70081;
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_ubyte i__70125 = ((x10_ubyte)0);
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            while (((p__70079) > (((x10_ubyte)1)))) {
                p__70079 = ((x10_ubyte) ((p__70079) >> (0x7 & (x10_int)(((x10_long)1ll)))));
                i__70125 = ((x10_ubyte) ((i__70125) + (((x10_ubyte)1))));
            }
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            ret__70081 = i__70125;
            ret__70081;
        }))
        ;
        
        //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        x10_ubyte cZ = (__extension__ ({
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_ubyte p__70083 = ((x10_ubyte) (((*this)->FMGL(z)) ^ (b->FMGL(z))));
            x10_ubyte ret__70085;
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_ubyte i__70126 = ((x10_ubyte)0);
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            while (((p__70083) > (((x10_ubyte)1)))) {
                p__70083 = ((x10_ubyte) ((p__70083) >> (0x7 & (x10_int)(((x10_long)1ll)))));
                i__70126 = ((x10_ubyte) ((i__70126) + (((x10_ubyte)1))));
            }
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            ret__70085 = i__70126;
            ret__70085;
        }))
        ;
        
        //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        if (((cX) >= (cY))) {
            
            //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            if (((cX) >= (cZ))) {
                
                //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                return ::x10::lang::UByteNatives::compareTo((*this)->FMGL(x), b->FMGL(x));
                
            } else {
                
                //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                return ::x10::lang::UByteNatives::compareTo((*this)->FMGL(z), b->FMGL(z));
                
            }
            
        } else 
        //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        if (((cY) >= (cZ))) {
            
            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            return ::x10::lang::UByteNatives::compareTo((*this)->FMGL(y), b->FMGL(y));
            
        } else {
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            return ::x10::lang::UByteNatives::compareTo((*this)->FMGL(z), b->FMGL(z));
            
        }
        
    }
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return levelComp;
    
}

//#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_ubyte au::edu::anu::mm::OctantId::_kwd__log2(x10_ubyte p) {
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_ubyte i = ((x10_ubyte)0);
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    while (((p) > (((x10_ubyte)1)))) {
        p = ((x10_ubyte) ((p) >> (0x7 & (x10_int)(((x10_long)1ll)))));
        i = ((x10_ubyte) ((i) + (((x10_ubyte)1))));
    }
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return i;
    
}

//#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_boolean au::edu::anu::mm::OctantId::__lt(::au::edu::anu::mm::OctantId x) {
    return ((((x10_long)((*this)->au::edu::anu::mm::OctantId::compareTo(x)))) < (((x10_long)0ll)));
    
}

//#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_boolean au::edu::anu::mm::OctantId::__le(::au::edu::anu::mm::OctantId x) {
    return ((((x10_long)((*this)->au::edu::anu::mm::OctantId::compareTo(x)))) <= (((x10_long)0ll)));
    
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_boolean au::edu::anu::mm::OctantId::__gt(::au::edu::anu::mm::OctantId x) {
    return ((((x10_long)((*this)->au::edu::anu::mm::OctantId::compareTo(x)))) > (((x10_long)0ll)));
    
}

//#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_boolean au::edu::anu::mm::OctantId::__ge(::au::edu::anu::mm::OctantId x) {
    return ((((x10_long)((*this)->au::edu::anu::mm::OctantId::compareTo(x)))) >= (((x10_long)0ll)));
    
}

//#line 68 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
::au::edu::anu::mm::OctantId au::edu::anu::mm::OctantId::next() {
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return ::au::edu::anu::mm::OctantId::getFromMortonId(((x10_uint) (((*this)->au::edu::anu::mm::OctantId::getMortonId()) + (((x10_uint)1u)))));
    
}

//#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_uint au::edu::anu::mm::OctantId::getMortonId() {
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint x__70134 = ((x10_uint) ((*this)->FMGL(x)));
    x10_uint y__70135 = ((x10_uint) ((*this)->FMGL(y)));
    x10_uint z__70136 = ((x10_uint) ((*this)->FMGL(z)));
    x10_uint level__70137 = ((x10_uint) ((*this)->FMGL(level)));
    x10_uint ret__70138;
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint id__70131 = ((x10_uint)0u);
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint bitmask__70132 = ((x10_uint)1u);
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_int shift__70133 = ((x10_int)0);
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    {
        x10_long i__70129;
        for (i__70129 = ((x10_long)0ll); ((i__70129) <= (((x10_long)7ll)));
             i__70129 = ((i__70129) + (((x10_long)1ll)))) {
            x10_long i__70130 = i__70129;
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id__70131 = ((x10_uint) ((id__70131) | (((x10_uint) ((((x10_uint) ((bitmask__70132) & (z__70136)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70127 = shift__70133;
                shift__70133 = ((shift__70133) + (((x10_int)1)));
                pre__70127;
            }))
            )))))))));
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id__70131 = ((x10_uint) ((id__70131) | (((x10_uint) ((((x10_uint) ((bitmask__70132) & (y__70135)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70128 = shift__70133;
                shift__70133 = ((shift__70133) + (((x10_int)1)));
                pre__70128;
            }))
            )))))))));
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id__70131 = ((x10_uint) ((id__70131) | (((x10_uint) ((((x10_uint) ((bitmask__70132) & (x__70134)))) << (x10_int)(0x1f & (((x10_long)(shift__70133)))))))));
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            bitmask__70132 = ((x10_uint) ((bitmask__70132) << (x10_int)(0x1f & (((x10_long)1ll)))));
        }
    }
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    id__70131 = ((x10_uint) ((id__70131) | (((x10_uint) ((level__70137) << (x10_int)(0x1f & (((x10_long)24ll))))))));
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    ret__70138 = id__70131;
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return ret__70138;
    
}

//#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_uint au::edu::anu::mm::OctantId::getMortonId(x10_uint x, x10_uint y, x10_uint z,
                                                 x10_uint level) {
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint id = ((x10_uint)0u);
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint bitmask = ((x10_uint)1u);
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_int shift = ((x10_int)0);
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    {
        x10_long i__70141;
        for (i__70141 = ((x10_long)0ll); ((i__70141) <= (((x10_long)7ll)));
             i__70141 = ((i__70141) + (((x10_long)1ll)))) {
            x10_long i__70142 = i__70141;
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (z)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70139 = shift;
                shift = ((shift) + (((x10_int)1)));
                pre__70139;
            }))
            )))))))));
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (y)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70140 = shift;
                shift = ((shift) + (((x10_int)1)));
                pre__70140;
            }))
            )))))))));
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (x)))) << (x10_int)(0x1f & (((x10_long)(shift)))))))));
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            bitmask = ((x10_uint) ((bitmask) << (x10_int)(0x1f & (((x10_long)1ll)))));
        }
    }
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    id = ((x10_uint) ((id) | (((x10_uint) ((level) << (x10_int)(0x1f & (((x10_long)24ll))))))));
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return id;
    
}

//#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
::au::edu::anu::mm::OctantId au::edu::anu::mm::OctantId::getFromMortonId(
  x10_uint mortonId) {
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint level = ((x10_uint) ((mortonId) >> (0x1f & (x10_int)(((x10_long)24ll)))));
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint x = ((x10_uint)0u);
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint y = ((x10_uint)0u);
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint z = ((x10_uint)0u);
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_int shift = ((x10_int)16);
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint bitmask = ((x10_uint)8388608u);
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    {
        x10_long i__70149;
        for (i__70149 = ((x10_long)0ll); ((i__70149) <= (((x10_long)7ll)));
             i__70149 = ((i__70149) + (((x10_long)1ll)))) {
            x10_long i__70150 = i__70149;
            
            //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x = ((x10_uint) ((x) | (((x10_uint) ((((x10_uint) ((mortonId) & (bitmask)))) >> (0x1f & (x10_int)(((x10_long)((__extension__ ({
                x10_int pre__70143 = shift;
                shift = ((shift) - (((x10_int)1)));
                pre__70143;
            }))
            )))))))));
            bitmask = ((x10_uint) ((bitmask) >> (0x1f & (x10_int)(((x10_long)1ll)))));
            
            //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            y = ((x10_uint) ((y) | (((x10_uint) ((((x10_uint) ((mortonId) & (bitmask)))) >> (0x1f & (x10_int)(((x10_long)((__extension__ ({
                x10_int pre__70144 = shift;
                shift = ((shift) - (((x10_int)1)));
                pre__70144;
            }))
            )))))))));
            bitmask = ((x10_uint) ((bitmask) >> (0x1f & (x10_int)(((x10_long)1ll)))));
            
            //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            z = ((x10_uint) ((z) | (((x10_uint) ((((x10_uint) ((mortonId) & (bitmask)))) >> (0x1f & (x10_int)(((x10_long)(shift)))))))));
            bitmask = ((x10_uint) ((bitmask) >> (0x1f & (x10_int)(((x10_long)1ll)))));
        }
    }
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    ::au::edu::anu::mm::OctantId alloc__70151 =  ::au::edu::anu::mm::OctantId::_alloc();
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_ubyte x__70145 = ((x10_ubyte) (x));
    x10_ubyte y__70146 = ((x10_ubyte) (y));
    x10_ubyte z__70147 = ((x10_ubyte) (z));
    x10_ubyte level__70148 = ((x10_ubyte) (level));
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    alloc__70151->FMGL(x) = x__70145;
    alloc__70151->FMGL(y) = y__70146;
    alloc__70151->FMGL(z) = z__70147;
    alloc__70151->FMGL(level) = level__70148;
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return alloc__70151;
    
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_uint au::edu::anu::mm::OctantId::getLeafMortonId() {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint x = ((x10_uint) ((*this)->FMGL(x)));
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint y = ((x10_uint) ((*this)->FMGL(y)));
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint z = ((x10_uint) ((*this)->FMGL(z)));
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint id = ((x10_uint)0u);
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint bitmask = ((x10_uint)1u);
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_int shift = ((x10_int)0);
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    {
        x10_long i__70154;
        for (i__70154 = ((x10_long)0ll); ((i__70154) <= (((x10_long)7ll)));
             i__70154 = ((i__70154) + (((x10_long)1ll)))) {
            x10_long i__70155 = i__70154;
            
            //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (z)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70152 = shift;
                shift = ((shift) + (((x10_int)1)));
                pre__70152;
            }))
            )))))))));
            
            //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (y)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70153 = shift;
                shift = ((shift) + (((x10_int)1)));
                pre__70153;
            }))
            )))))))));
            
            //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (x)))) << (x10_int)(0x1f & (((x10_long)(shift)))))))));
            
            //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            bitmask = ((x10_uint) ((bitmask) << (x10_int)(0x1f & (((x10_long)1ll)))));
        }
    }
    
    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return id;
    
}

//#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_uint au::edu::anu::mm::OctantId::getLeafMortonId(::x10x::vector::Point3d atomCentre,
                                                     x10_double invSideLength,
                                                     x10_double offset) {
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint x = ::x10::lang::DoubleNatives::toUInt(((((atomCentre->FMGL(i)) * (invSideLength))) + (offset)));
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint y = ::x10::lang::DoubleNatives::toUInt(((((atomCentre->FMGL(j)) * (invSideLength))) + (offset)));
    
    //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint z = ::x10::lang::DoubleNatives::toUInt(((((atomCentre->FMGL(k)) * (invSideLength))) + (offset)));
    
    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint id = ((x10_uint)0u);
    
    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_uint bitmask = ((x10_uint)1u);
    
    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_int shift = ((x10_int)0);
    
    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    {
        x10_long i__70158;
        for (i__70158 = ((x10_long)0ll); ((i__70158) <= (((x10_long)7ll)));
             i__70158 = ((i__70158) + (((x10_long)1ll))))
        {
            x10_long i__70159 = i__70158;
            
            //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (z)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70156 = shift;
                shift = ((shift) + (((x10_int)1)));
                pre__70156;
            }))
            )))))))));
            
            //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (y)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                x10_int pre__70157 = shift;
                shift = ((shift) + (((x10_int)1)));
                pre__70157;
            }))
            )))))))));
            
            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id = ((x10_uint) ((id) | (((x10_uint) ((((x10_uint) ((bitmask) & (x)))) << (x10_int)(0x1f & (((x10_long)(shift)))))))));
            
            //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            bitmask = ((x10_uint) ((bitmask) << (x10_int)(0x1f & (((x10_long)1ll)))));
        }
    }
    
    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return id;
    
}

//#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
::au::edu::anu::mm::OctantId au::edu::anu::mm::OctantId::getParentId(
  ) {
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    ::au::edu::anu::mm::OctantId alloc__70164 =  ::au::edu::anu::mm::OctantId::_alloc();
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_ubyte x__70160 = ((x10_ubyte) (((*this)->FMGL(x)) / ::x10aux::zeroCheck(((x10_ubyte)2))));
    x10_ubyte y__70161 = ((x10_ubyte) (((*this)->FMGL(y)) / ::x10aux::zeroCheck(((x10_ubyte)2))));
    x10_ubyte z__70162 = ((x10_ubyte) (((*this)->FMGL(z)) / ::x10aux::zeroCheck(((x10_ubyte)2))));
    x10_ubyte level__70163 = ((x10_ubyte) (((*this)->FMGL(level)) - (((x10_ubyte)1))));
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    alloc__70164->FMGL(x) = x__70160;
    alloc__70164->FMGL(y) = y__70161;
    alloc__70164->FMGL(z) = z__70162;
    alloc__70164->FMGL(level) = level__70163;
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return alloc__70164;
    
}

//#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
::au::edu::anu::mm::OctantId au::edu::anu::mm::OctantId::getAnchor(
  x10_ubyte dMax) {
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(level), dMax)))
    {
        return (*this);
        
    }
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_ubyte shift = ((x10_ubyte) ((dMax) - ((*this)->FMGL(level))));
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    ::au::edu::anu::mm::OctantId alloc__70169 =  ::au::edu::anu::mm::OctantId::_alloc();
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    x10_ubyte x__70165 = ((x10_ubyte) (((*this)->FMGL(x)) << (0x7 & (x10_int)(((x10_long)(shift))))));
    x10_ubyte y__70166 = ((x10_ubyte) (((*this)->FMGL(y)) << (0x7 & (x10_int)(((x10_long)(shift))))));
    x10_ubyte z__70167 = ((x10_ubyte) (((*this)->FMGL(z)) << (0x7 & (x10_int)(((x10_long)(shift))))));
    x10_ubyte level__70168 = dMax;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    alloc__70169->FMGL(x) = x__70165;
    alloc__70169->FMGL(y) = y__70166;
    alloc__70169->FMGL(z) = z__70167;
    alloc__70169->FMGL(level) = level__70168;
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return alloc__70169;
    
}

//#line 162 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
x10_int au::edu::anu::mm::OctantId::getChildIndex(x10_ubyte dMax,
                                                  ::au::edu::anu::mm::OctantId childId) {
    
    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return ((((x10_int)(((x10_ubyte) ((((x10_ubyte) ((((x10_ubyte) ((childId->FMGL(x)) % ::x10aux::zeroCheck(((x10_ubyte)2))))) << (0x7 & (x10_int)(((x10_long)(((x10_int)2)))))))) | (((x10_ubyte) ((((x10_ubyte) ((childId->FMGL(y)) % ::x10aux::zeroCheck(((x10_ubyte)2))))) << (0x7 & (x10_int)(((x10_long)(((x10_int)1))))))))))))) | (((((x10_int)(childId->FMGL(z)))) % ::x10aux::zeroCheck(((x10_int)2)))));
    
}

//#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
::x10::lang::String* au::edu::anu::mm::OctantId::toString(
  ) {
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::OctantId_Strings::sl__73152), (*this)->FMGL(level)), (&::au::edu::anu::mm::OctantId_Strings::sl__73153)), (*this)->FMGL(x)), (&::au::edu::anu::mm::OctantId_Strings::sl__73154)), (*this)->FMGL(y)), (&::au::edu::anu::mm::OctantId_Strings::sl__73154)), (*this)->FMGL(z)), (&::au::edu::anu::mm::OctantId_Strings::sl__73155));
    
}

//#line 17 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
::x10::lang::String* au::edu::anu::mm::OctantId::typeName(
  ){
    return ::x10aux::type_name((*this));
}
x10_int au::edu::anu::mm::OctantId::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(x))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(y))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(z))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(level))));
    return result;
    
}
x10_boolean au::edu::anu::mm::OctantId::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::OctantId>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::mm::OctantId::equals(::x10aux::class_cast< ::au::edu::anu::mm::OctantId>(other));
    
}
x10_boolean au::edu::anu::mm::OctantId::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::OctantId>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::mm::OctantId::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::mm::OctantId>(other));
    
}
void ::au::edu::anu::mm::OctantId::_serialize(::au::edu::anu::mm::OctantId this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(x));
    buf.write(this_->FMGL(y));
    buf.write(this_->FMGL(z));
    buf.write(this_->FMGL(level));
    
}

void ::au::edu::anu::mm::OctantId::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_ubyte>();
    FMGL(y) = buf.read<x10_ubyte>();
    FMGL(z) = buf.read<x10_ubyte>();
    FMGL(level) = buf.read<x10_ubyte>();
}


::x10aux::RuntimeType au::edu::anu::mm::OctantId::rtt;
void au::edu::anu::mm::OctantId::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::OctantId > >()};
    rtt.initStageTwo("au.edu.anu.mm.OctantId",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::mm::OctantId_Strings::sl__73152("");
::x10::lang::String au::edu::anu::mm::OctantId_Strings::sl__73153(":(");
::x10::lang::String au::edu::anu::mm::OctantId_Strings::sl__73155(")");
::x10::lang::String au::edu::anu::mm::OctantId_Strings::sl__73154(",");

/* END of OctantId */
/*************************************************/
