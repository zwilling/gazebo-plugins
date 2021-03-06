// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MachineReport.proto

#ifndef PROTOBUF_MachineReport_2eproto__INCLUDED
#define PROTOBUF_MachineReport_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "MachineInfo.pb.h"
#include "PuckInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MachineReport_2eproto();
void protobuf_AssignDesc_MachineReport_2eproto();
void protobuf_ShutdownFile_MachineReport_2eproto();

class MachineReportEntry;
class MachineReport;
class MachineReportInfo;

enum MachineReportEntry_CompType {
  MachineReportEntry_CompType_COMP_ID = 2000,
  MachineReportEntry_CompType_MSG_TYPE = 60
};
bool MachineReportEntry_CompType_IsValid(int value);
const MachineReportEntry_CompType MachineReportEntry_CompType_CompType_MIN = MachineReportEntry_CompType_MSG_TYPE;
const MachineReportEntry_CompType MachineReportEntry_CompType_CompType_MAX = MachineReportEntry_CompType_COMP_ID;
const int MachineReportEntry_CompType_CompType_ARRAYSIZE = MachineReportEntry_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MachineReportEntry_CompType_descriptor();
inline const ::std::string& MachineReportEntry_CompType_Name(MachineReportEntry_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MachineReportEntry_CompType_descriptor(), value);
}
inline bool MachineReportEntry_CompType_Parse(
    const ::std::string& name, MachineReportEntry_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MachineReportEntry_CompType>(
    MachineReportEntry_CompType_descriptor(), name, value);
}
enum MachineReport_CompType {
  MachineReport_CompType_COMP_ID = 2000,
  MachineReport_CompType_MSG_TYPE = 61
};
bool MachineReport_CompType_IsValid(int value);
const MachineReport_CompType MachineReport_CompType_CompType_MIN = MachineReport_CompType_MSG_TYPE;
const MachineReport_CompType MachineReport_CompType_CompType_MAX = MachineReport_CompType_COMP_ID;
const int MachineReport_CompType_CompType_ARRAYSIZE = MachineReport_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MachineReport_CompType_descriptor();
inline const ::std::string& MachineReport_CompType_Name(MachineReport_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MachineReport_CompType_descriptor(), value);
}
inline bool MachineReport_CompType_Parse(
    const ::std::string& name, MachineReport_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MachineReport_CompType>(
    MachineReport_CompType_descriptor(), name, value);
}
enum MachineReportInfo_CompType {
  MachineReportInfo_CompType_COMP_ID = 2000,
  MachineReportInfo_CompType_MSG_TYPE = 62
};
bool MachineReportInfo_CompType_IsValid(int value);
const MachineReportInfo_CompType MachineReportInfo_CompType_CompType_MIN = MachineReportInfo_CompType_MSG_TYPE;
const MachineReportInfo_CompType MachineReportInfo_CompType_CompType_MAX = MachineReportInfo_CompType_COMP_ID;
const int MachineReportInfo_CompType_CompType_ARRAYSIZE = MachineReportInfo_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MachineReportInfo_CompType_descriptor();
inline const ::std::string& MachineReportInfo_CompType_Name(MachineReportInfo_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MachineReportInfo_CompType_descriptor(), value);
}
inline bool MachineReportInfo_CompType_Parse(
    const ::std::string& name, MachineReportInfo_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MachineReportInfo_CompType>(
    MachineReportInfo_CompType_descriptor(), name, value);
}
// ===================================================================

class MachineReportEntry : public ::google::protobuf::Message {
 public:
  MachineReportEntry();
  virtual ~MachineReportEntry();
  
  MachineReportEntry(const MachineReportEntry& from);
  
  inline MachineReportEntry& operator=(const MachineReportEntry& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const MachineReportEntry& default_instance();
  
  void Swap(MachineReportEntry* other);
  
  // implements Message ----------------------------------------------
  
  MachineReportEntry* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MachineReportEntry& from);
  void MergeFrom(const MachineReportEntry& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef MachineReportEntry_CompType CompType;
  static const CompType COMP_ID = MachineReportEntry_CompType_COMP_ID;
  static const CompType MSG_TYPE = MachineReportEntry_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return MachineReportEntry_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    MachineReportEntry_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    MachineReportEntry_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    MachineReportEntry_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return MachineReportEntry_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return MachineReportEntry_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return MachineReportEntry_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  inline ::std::string* release_type();
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.MachineReportEntry)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_type();
  inline void clear_has_type();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_MachineReport_2eproto();
  friend void protobuf_AssignDesc_MachineReport_2eproto();
  friend void protobuf_ShutdownFile_MachineReport_2eproto();
  
  void InitAsDefaultInstance();
  static MachineReportEntry* default_instance_;
};
// -------------------------------------------------------------------

class MachineReport : public ::google::protobuf::Message {
 public:
  MachineReport();
  virtual ~MachineReport();
  
  MachineReport(const MachineReport& from);
  
  inline MachineReport& operator=(const MachineReport& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const MachineReport& default_instance();
  
  void Swap(MachineReport* other);
  
  // implements Message ----------------------------------------------
  
  MachineReport* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MachineReport& from);
  void MergeFrom(const MachineReport& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef MachineReport_CompType CompType;
  static const CompType COMP_ID = MachineReport_CompType_COMP_ID;
  static const CompType MSG_TYPE = MachineReport_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return MachineReport_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    MachineReport_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    MachineReport_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    MachineReport_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return MachineReport_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return MachineReport_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return MachineReport_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // repeated .llsf_msgs.MachineReportEntry machines = 1;
  inline int machines_size() const;
  inline void clear_machines();
  static const int kMachinesFieldNumber = 1;
  inline const ::llsf_msgs::MachineReportEntry& machines(int index) const;
  inline ::llsf_msgs::MachineReportEntry* mutable_machines(int index);
  inline ::llsf_msgs::MachineReportEntry* add_machines();
  inline const ::google::protobuf::RepeatedPtrField< ::llsf_msgs::MachineReportEntry >&
      machines() const;
  inline ::google::protobuf::RepeatedPtrField< ::llsf_msgs::MachineReportEntry >*
      mutable_machines();
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.MachineReport)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::llsf_msgs::MachineReportEntry > machines_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_MachineReport_2eproto();
  friend void protobuf_AssignDesc_MachineReport_2eproto();
  friend void protobuf_ShutdownFile_MachineReport_2eproto();
  
  void InitAsDefaultInstance();
  static MachineReport* default_instance_;
};
// -------------------------------------------------------------------

class MachineReportInfo : public ::google::protobuf::Message {
 public:
  MachineReportInfo();
  virtual ~MachineReportInfo();
  
  MachineReportInfo(const MachineReportInfo& from);
  
  inline MachineReportInfo& operator=(const MachineReportInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const MachineReportInfo& default_instance();
  
  void Swap(MachineReportInfo* other);
  
  // implements Message ----------------------------------------------
  
  MachineReportInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MachineReportInfo& from);
  void MergeFrom(const MachineReportInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef MachineReportInfo_CompType CompType;
  static const CompType COMP_ID = MachineReportInfo_CompType_COMP_ID;
  static const CompType MSG_TYPE = MachineReportInfo_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return MachineReportInfo_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    MachineReportInfo_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    MachineReportInfo_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    MachineReportInfo_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return MachineReportInfo_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return MachineReportInfo_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return MachineReportInfo_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // repeated string reported_machines = 1;
  inline int reported_machines_size() const;
  inline void clear_reported_machines();
  static const int kReportedMachinesFieldNumber = 1;
  inline const ::std::string& reported_machines(int index) const;
  inline ::std::string* mutable_reported_machines(int index);
  inline void set_reported_machines(int index, const ::std::string& value);
  inline void set_reported_machines(int index, const char* value);
  inline void set_reported_machines(int index, const char* value, size_t size);
  inline ::std::string* add_reported_machines();
  inline void add_reported_machines(const ::std::string& value);
  inline void add_reported_machines(const char* value);
  inline void add_reported_machines(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& reported_machines() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_reported_machines();
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.MachineReportInfo)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::std::string> reported_machines_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_MachineReport_2eproto();
  friend void protobuf_AssignDesc_MachineReport_2eproto();
  friend void protobuf_ShutdownFile_MachineReport_2eproto();
  
  void InitAsDefaultInstance();
  static MachineReportInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// MachineReportEntry

// required string name = 1;
inline bool MachineReportEntry::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MachineReportEntry::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MachineReportEntry::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MachineReportEntry::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& MachineReportEntry::name() const {
  return *name_;
}
inline void MachineReportEntry::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MachineReportEntry::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MachineReportEntry::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MachineReportEntry::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* MachineReportEntry::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string type = 2;
inline bool MachineReportEntry::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MachineReportEntry::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MachineReportEntry::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MachineReportEntry::clear_type() {
  if (type_ != &::google::protobuf::internal::kEmptyString) {
    type_->clear();
  }
  clear_has_type();
}
inline const ::std::string& MachineReportEntry::type() const {
  return *type_;
}
inline void MachineReportEntry::set_type(const ::std::string& value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void MachineReportEntry::set_type(const char* value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void MachineReportEntry::set_type(const char* value, size_t size) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MachineReportEntry::mutable_type() {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  return type_;
}
inline ::std::string* MachineReportEntry::release_type() {
  clear_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = type_;
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// MachineReport

// repeated .llsf_msgs.MachineReportEntry machines = 1;
inline int MachineReport::machines_size() const {
  return machines_.size();
}
inline void MachineReport::clear_machines() {
  machines_.Clear();
}
inline const ::llsf_msgs::MachineReportEntry& MachineReport::machines(int index) const {
  return machines_.Get(index);
}
inline ::llsf_msgs::MachineReportEntry* MachineReport::mutable_machines(int index) {
  return machines_.Mutable(index);
}
inline ::llsf_msgs::MachineReportEntry* MachineReport::add_machines() {
  return machines_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::llsf_msgs::MachineReportEntry >&
MachineReport::machines() const {
  return machines_;
}
inline ::google::protobuf::RepeatedPtrField< ::llsf_msgs::MachineReportEntry >*
MachineReport::mutable_machines() {
  return &machines_;
}

// -------------------------------------------------------------------

// MachineReportInfo

// repeated string reported_machines = 1;
inline int MachineReportInfo::reported_machines_size() const {
  return reported_machines_.size();
}
inline void MachineReportInfo::clear_reported_machines() {
  reported_machines_.Clear();
}
inline const ::std::string& MachineReportInfo::reported_machines(int index) const {
  return reported_machines_.Get(index);
}
inline ::std::string* MachineReportInfo::mutable_reported_machines(int index) {
  return reported_machines_.Mutable(index);
}
inline void MachineReportInfo::set_reported_machines(int index, const ::std::string& value) {
  reported_machines_.Mutable(index)->assign(value);
}
inline void MachineReportInfo::set_reported_machines(int index, const char* value) {
  reported_machines_.Mutable(index)->assign(value);
}
inline void MachineReportInfo::set_reported_machines(int index, const char* value, size_t size) {
  reported_machines_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MachineReportInfo::add_reported_machines() {
  return reported_machines_.Add();
}
inline void MachineReportInfo::add_reported_machines(const ::std::string& value) {
  reported_machines_.Add()->assign(value);
}
inline void MachineReportInfo::add_reported_machines(const char* value) {
  reported_machines_.Add()->assign(value);
}
inline void MachineReportInfo::add_reported_machines(const char* value, size_t size) {
  reported_machines_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MachineReportInfo::reported_machines() const {
  return reported_machines_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MachineReportInfo::mutable_reported_machines() {
  return &reported_machines_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::MachineReportEntry_CompType>() {
  return ::llsf_msgs::MachineReportEntry_CompType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::MachineReport_CompType>() {
  return ::llsf_msgs::MachineReport_CompType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::MachineReportInfo_CompType>() {
  return ::llsf_msgs::MachineReportInfo_CompType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MachineReport_2eproto__INCLUDED
