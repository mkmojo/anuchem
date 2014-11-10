/*************************************************/
/* START of StringSplitter */
#include <au/edu/anu/util/StringSplitter.h>

#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/compiler/Synthetic.h>

//#line 16 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
::x10::lang::Rail< ::x10::lang::String* >* au::edu::anu::util::StringSplitter::splitOnWhitespace(
  ::x10::lang::String* s) {
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* words =  (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::lang::String*> >()) ::x10::util::ArrayList< ::x10::lang::String*>());
    (words)->::x10::util::ArrayList< ::x10::lang::String*>::_constructor();
    
    //#line 18 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    x10_int end = ::x10aux::nullCheck(s)->x10::lang::String::length();
    
    //#line 19 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    x10_int offset = ((x10_int)0);
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    x10_int startOffset = ((x10_int)0);
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    x10_boolean word = !(::x10::lang::CharNatives::isWhitespace(::x10aux::nullCheck(s)->x10::lang::String::charAt(
                                                                  ((x10_int)0))));
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    while (((offset) < (end))) {
        
        //#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
        x10_boolean whitespace = ::x10::lang::CharNatives::isWhitespace(::x10aux::nullCheck(s)->x10::lang::String::charAt(
                                                                          offset));
        
        //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
        if ((word && whitespace)) {
            
            //#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
            word = false;
            
            //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
            words->add(::x10aux::nullCheck(s)->x10::lang::String::substring(
                         startOffset, offset));
        } else 
        //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
        if ((!(word) && !(whitespace))) {
            
            //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
            word = true;
            
            //#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
            startOffset = offset;
        }
        
        //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
        offset = ((offset) + (((x10_int)1)));
    }
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    if (word) {
        words->add(::x10aux::nullCheck(s)->x10::lang::String::substring(
                     startOffset, offset));
    }
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
    return words->toRail();
    
}

//#line 15 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StringSplitter.x10"
::au::edu::anu::util::StringSplitter* au::edu::anu::util::StringSplitter::au__edu__anu__util__StringSplitter____this__au__edu__anu__util__StringSplitter(
  ) {
    return this;
    
}
void au::edu::anu::util::StringSplitter::_constructor() {
    ::au::edu::anu::util::StringSplitter* this__32408 = this;
    
}
::au::edu::anu::util::StringSplitter* au::edu::anu::util::StringSplitter::_make(
  ) {
    ::au::edu::anu::util::StringSplitter* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::StringSplitter>()) ::au::edu::anu::util::StringSplitter();
    this_->_constructor();
    return this_;
}


void au::edu::anu::util::StringSplitter::__fieldInitializers_au_edu_anu_util_StringSplitter(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::util::StringSplitter::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::util::StringSplitter::_deserializer);

void au::edu::anu::util::StringSplitter::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::util::StringSplitter::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::util::StringSplitter* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::StringSplitter>()) ::au::edu::anu::util::StringSplitter();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::util::StringSplitter::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::util::StringSplitter::rtt;
void au::edu::anu::util::StringSplitter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.util.StringSplitter",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of StringSplitter */
/*************************************************/
