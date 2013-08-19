// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AttentionMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

namespace {

const ::google::protobuf::Descriptor* AttentionMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AttentionMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* AttentionMessage_CompType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_AttentionMessage_2eproto() {
  protobuf_AddDesc_AttentionMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AttentionMessage.proto");
  GOOGLE_CHECK(file != NULL);
  AttentionMessage_descriptor_ = file->message_type(0);
  static const int AttentionMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttentionMessage, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttentionMessage, time_to_show_),
  };
  AttentionMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AttentionMessage_descriptor_,
      AttentionMessage::default_instance_,
      AttentionMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttentionMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttentionMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AttentionMessage));
  AttentionMessage_CompType_descriptor_ = AttentionMessage_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AttentionMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AttentionMessage_descriptor_, &AttentionMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AttentionMessage_2eproto() {
  delete AttentionMessage::default_instance_;
  delete AttentionMessage_reflection_;
}

void protobuf_AddDesc_AttentionMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026AttentionMessage.proto\022\tllsf_msgs\"a\n\020A"
    "ttentionMessage\022\017\n\007message\030\001 \002(\t\022\024\n\014time"
    "_to_show\030\002 \001(\002\"&\n\010CompType\022\014\n\007COMP_ID\020\320\017"
    "\022\014\n\010MSG_TYPE\020\002B9\n\037org.robocup_logistics."
    "llsf_msgsB\026AttentionMessageProtos", 193);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AttentionMessage.proto", &protobuf_RegisterTypes);
  AttentionMessage::default_instance_ = new AttentionMessage();
  AttentionMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AttentionMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AttentionMessage_2eproto {
  StaticDescriptorInitializer_AttentionMessage_2eproto() {
    protobuf_AddDesc_AttentionMessage_2eproto();
  }
} static_descriptor_initializer_AttentionMessage_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* AttentionMessage_CompType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AttentionMessage_CompType_descriptor_;
}
bool AttentionMessage_CompType_IsValid(int value) {
  switch(value) {
    case 2:
    case 2000:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const AttentionMessage_CompType AttentionMessage::COMP_ID;
const AttentionMessage_CompType AttentionMessage::MSG_TYPE;
const AttentionMessage_CompType AttentionMessage::CompType_MIN;
const AttentionMessage_CompType AttentionMessage::CompType_MAX;
const int AttentionMessage::CompType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int AttentionMessage::kMessageFieldNumber;
const int AttentionMessage::kTimeToShowFieldNumber;
#endif  // !_MSC_VER

AttentionMessage::AttentionMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AttentionMessage::InitAsDefaultInstance() {
}

AttentionMessage::AttentionMessage(const AttentionMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AttentionMessage::SharedCtor() {
  _cached_size_ = 0;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  time_to_show_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttentionMessage::~AttentionMessage() {
  SharedDtor();
}

void AttentionMessage::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void AttentionMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AttentionMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AttentionMessage_descriptor_;
}

const AttentionMessage& AttentionMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AttentionMessage_2eproto();  return *default_instance_;
}

AttentionMessage* AttentionMessage::default_instance_ = NULL;

AttentionMessage* AttentionMessage::New() const {
  return new AttentionMessage;
}

void AttentionMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
    time_to_show_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AttentionMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string message = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_time_to_show;
        break;
      }
      
      // optional float time_to_show = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_time_to_show:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &time_to_show_)));
          set_has_time_to_show();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AttentionMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->message(), output);
  }
  
  // optional float time_to_show = 2;
  if (has_time_to_show()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->time_to_show(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AttentionMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }
  
  // optional float time_to_show = 2;
  if (has_time_to_show()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->time_to_show(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AttentionMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string message = 1;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }
    
    // optional float time_to_show = 2;
    if (has_time_to_show()) {
      total_size += 1 + 4;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttentionMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AttentionMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AttentionMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AttentionMessage::MergeFrom(const AttentionMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message()) {
      set_message(from.message());
    }
    if (from.has_time_to_show()) {
      set_time_to_show(from.time_to_show());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AttentionMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttentionMessage::CopyFrom(const AttentionMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttentionMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void AttentionMessage::Swap(AttentionMessage* other) {
  if (other != this) {
    std::swap(message_, other->message_);
    std::swap(time_to_show_, other->time_to_show_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AttentionMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AttentionMessage_descriptor_;
  metadata.reflection = AttentionMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

// @@protoc_insertion_point(global_scope)
