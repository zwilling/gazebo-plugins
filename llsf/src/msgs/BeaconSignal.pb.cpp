// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BeaconSignal.pb.h"

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

const ::google::protobuf::Descriptor* BeaconSignal_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BeaconSignal_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* BeaconSignal_CompType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_BeaconSignal_2eproto() {
  protobuf_AddDesc_BeaconSignal_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BeaconSignal.proto");
  GOOGLE_CHECK(file != NULL);
  BeaconSignal_descriptor_ = file->message_type(0);
  static const int BeaconSignal_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, team_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, peer_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, pose_),
  };
  BeaconSignal_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BeaconSignal_descriptor_,
      BeaconSignal::default_instance_,
      BeaconSignal_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BeaconSignal, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BeaconSignal));
  BeaconSignal_CompType_descriptor_ = BeaconSignal_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BeaconSignal_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BeaconSignal_descriptor_, &BeaconSignal::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BeaconSignal_2eproto() {
  delete BeaconSignal::default_instance_;
  delete BeaconSignal_reflection_;
}

void protobuf_AddDesc_BeaconSignal_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::llsf_msgs::protobuf_AddDesc_Time_2eproto();
  ::llsf_msgs::protobuf_AddDesc_Pose2D_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022BeaconSignal.proto\022\tllsf_msgs\032\nTime.pr"
    "oto\032\014Pose2D.proto\"\271\001\n\014BeaconSignal\022\035\n\004ti"
    "me\030\001 \002(\0132\017.llsf_msgs.Time\022\013\n\003seq\030\002 \002(\004\022\016"
    "\n\006number\030\010 \002(\r\022\021\n\tteam_name\030\004 \002(\t\022\021\n\tpee"
    "r_name\030\005 \002(\t\022\037\n\004pose\030\007 \001(\0132\021.llsf_msgs.P"
    "ose2D\"&\n\010CompType\022\014\n\007COMP_ID\020\320\017\022\014\n\010MSG_T"
    "YPE\020\001B5\n\037org.robocup_logistics.llsf_msgs"
    "B\022BeaconSignalProtos", 300);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BeaconSignal.proto", &protobuf_RegisterTypes);
  BeaconSignal::default_instance_ = new BeaconSignal();
  BeaconSignal::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BeaconSignal_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BeaconSignal_2eproto {
  StaticDescriptorInitializer_BeaconSignal_2eproto() {
    protobuf_AddDesc_BeaconSignal_2eproto();
  }
} static_descriptor_initializer_BeaconSignal_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* BeaconSignal_CompType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BeaconSignal_CompType_descriptor_;
}
bool BeaconSignal_CompType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2000:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const BeaconSignal_CompType BeaconSignal::COMP_ID;
const BeaconSignal_CompType BeaconSignal::MSG_TYPE;
const BeaconSignal_CompType BeaconSignal::CompType_MIN;
const BeaconSignal_CompType BeaconSignal::CompType_MAX;
const int BeaconSignal::CompType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int BeaconSignal::kTimeFieldNumber;
const int BeaconSignal::kSeqFieldNumber;
const int BeaconSignal::kNumberFieldNumber;
const int BeaconSignal::kTeamNameFieldNumber;
const int BeaconSignal::kPeerNameFieldNumber;
const int BeaconSignal::kPoseFieldNumber;
#endif  // !_MSC_VER

BeaconSignal::BeaconSignal()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BeaconSignal::InitAsDefaultInstance() {
  time_ = const_cast< ::llsf_msgs::Time*>(&::llsf_msgs::Time::default_instance());
  pose_ = const_cast< ::llsf_msgs::Pose2D*>(&::llsf_msgs::Pose2D::default_instance());
}

BeaconSignal::BeaconSignal(const BeaconSignal& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BeaconSignal::SharedCtor() {
  _cached_size_ = 0;
  time_ = NULL;
  seq_ = GOOGLE_ULONGLONG(0);
  number_ = 0u;
  team_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  peer_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  pose_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BeaconSignal::~BeaconSignal() {
  SharedDtor();
}

void BeaconSignal::SharedDtor() {
  if (team_name_ != &::google::protobuf::internal::kEmptyString) {
    delete team_name_;
  }
  if (peer_name_ != &::google::protobuf::internal::kEmptyString) {
    delete peer_name_;
  }
  if (this != default_instance_) {
    delete time_;
    delete pose_;
  }
}

void BeaconSignal::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BeaconSignal::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BeaconSignal_descriptor_;
}

const BeaconSignal& BeaconSignal::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BeaconSignal_2eproto();  return *default_instance_;
}

BeaconSignal* BeaconSignal::default_instance_ = NULL;

BeaconSignal* BeaconSignal::New() const {
  return new BeaconSignal;
}

void BeaconSignal::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_time()) {
      if (time_ != NULL) time_->::llsf_msgs::Time::Clear();
    }
    seq_ = GOOGLE_ULONGLONG(0);
    number_ = 0u;
    if (has_team_name()) {
      if (team_name_ != &::google::protobuf::internal::kEmptyString) {
        team_name_->clear();
      }
    }
    if (has_peer_name()) {
      if (peer_name_ != &::google::protobuf::internal::kEmptyString) {
        peer_name_->clear();
      }
    }
    if (has_pose()) {
      if (pose_ != NULL) pose_->::llsf_msgs::Pose2D::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BeaconSignal::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .llsf_msgs.Time time = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_seq;
        break;
      }
      
      // required uint64 seq = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &seq_)));
          set_has_seq();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_team_name;
        break;
      }
      
      // required string team_name = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_team_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_team_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->team_name().data(), this->team_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_peer_name;
        break;
      }
      
      // required string peer_name = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_peer_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_peer_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->peer_name().data(), this->peer_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_pose;
        break;
      }
      
      // optional .llsf_msgs.Pose2D pose = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_number;
        break;
      }
      
      // required uint32 number = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &number_)));
          set_has_number();
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

void BeaconSignal::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .llsf_msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->time(), output);
  }
  
  // required uint64 seq = 2;
  if (has_seq()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->seq(), output);
  }
  
  // required string team_name = 4;
  if (has_team_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->team_name().data(), this->team_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->team_name(), output);
  }
  
  // required string peer_name = 5;
  if (has_peer_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->peer_name().data(), this->peer_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->peer_name(), output);
  }
  
  // optional .llsf_msgs.Pose2D pose = 7;
  if (has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->pose(), output);
  }
  
  // required uint32 number = 8;
  if (has_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->number(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BeaconSignal::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .llsf_msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->time(), target);
  }
  
  // required uint64 seq = 2;
  if (has_seq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->seq(), target);
  }
  
  // required string team_name = 4;
  if (has_team_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->team_name().data(), this->team_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->team_name(), target);
  }
  
  // required string peer_name = 5;
  if (has_peer_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->peer_name().data(), this->peer_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->peer_name(), target);
  }
  
  // optional .llsf_msgs.Pose2D pose = 7;
  if (has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->pose(), target);
  }
  
  // required uint32 number = 8;
  if (has_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->number(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BeaconSignal::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .llsf_msgs.Time time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time());
    }
    
    // required uint64 seq = 2;
    if (has_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->seq());
    }
    
    // required uint32 number = 8;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->number());
    }
    
    // required string team_name = 4;
    if (has_team_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->team_name());
    }
    
    // required string peer_name = 5;
    if (has_peer_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->peer_name());
    }
    
    // optional .llsf_msgs.Pose2D pose = 7;
    if (has_pose()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pose());
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

void BeaconSignal::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BeaconSignal* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BeaconSignal*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BeaconSignal::MergeFrom(const BeaconSignal& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::llsf_msgs::Time::MergeFrom(from.time());
    }
    if (from.has_seq()) {
      set_seq(from.seq());
    }
    if (from.has_number()) {
      set_number(from.number());
    }
    if (from.has_team_name()) {
      set_team_name(from.team_name());
    }
    if (from.has_peer_name()) {
      set_peer_name(from.peer_name());
    }
    if (from.has_pose()) {
      mutable_pose()->::llsf_msgs::Pose2D::MergeFrom(from.pose());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BeaconSignal::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BeaconSignal::CopyFrom(const BeaconSignal& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BeaconSignal::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  
  if (has_time()) {
    if (!this->time().IsInitialized()) return false;
  }
  if (has_pose()) {
    if (!this->pose().IsInitialized()) return false;
  }
  return true;
}

void BeaconSignal::Swap(BeaconSignal* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    std::swap(seq_, other->seq_);
    std::swap(number_, other->number_);
    std::swap(team_name_, other->team_name_);
    std::swap(peer_name_, other->peer_name_);
    std::swap(pose_, other->pose_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BeaconSignal::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BeaconSignal_descriptor_;
  metadata.reflection = BeaconSignal_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

// @@protoc_insertion_point(global_scope)
