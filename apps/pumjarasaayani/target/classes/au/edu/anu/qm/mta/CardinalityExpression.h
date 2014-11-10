#ifndef __AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H
#define __AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class Fragment;
} } } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 

class CardinalityExpression_Strings {
  public:
    static ::x10::lang::String sl__149241;
};

class CardinalityExpression : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_boolean FMGL(mergedIntoPreviousTerm);
    
    void _constructor();
    
    static ::au::edu::anu::qm::mta::CardinalityExpression* _make();
    
    virtual void addCardinalityFragments(::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    x10_int getSignOfTerm(x10_int n);
    x10_boolean computeIntersections(::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList,
                                     ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* cfList,
                                     ::x10::lang::Rail< x10_int >* combs,
                                     x10_int nTerms, x10_int sign);
    void addFragmentToList(::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList,
                           ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* cfList,
                           ::au::edu::anu::qm::mta::Fragment* fragment,
                           x10_int sign);
    virtual ::au::edu::anu::qm::mta::CardinalityExpression*
      au__edu__anu__qm__mta__CardinalityExpression____this__au__edu__anu__qm__mta__CardinalityExpression(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_mta_CardinalityExpression(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } } 
#endif // AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H

namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class CardinalityExpression;
} } } } } 

#ifndef AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H_NODEPS
#define AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H_NODEPS
#ifndef AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H_GENERICS
#define AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H_GENERICS
#endif // AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H_GENERICS
#endif // __AU_EDU_ANU_QM_MTA_CARDINALITYEXPRESSION_H_NODEPS
