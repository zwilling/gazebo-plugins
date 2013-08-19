// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OrderInfo.pb.h"

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

const ::google::protobuf::Descriptor* Order_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Order_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Order_CompType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Order_ProductType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Order_DeliveryGate_descriptor_ = NULL;
const ::google::protobuf::Descriptor* OrderInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrderInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* OrderInfo_CompType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_OrderInfo_2eproto() {
  protobuf_AddDesc_OrderInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "OrderInfo.proto");
  GOOGLE_CHECK(file != NULL);
  Order_descriptor_ = file->message_type(0);
  static const int Order_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, product_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, quantity_requested_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, quantity_delivered_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, delivery_period_begin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, delivery_period_end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, delivery_gate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, late_order_),
  };
  Order_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Order_descriptor_,
      Order::default_instance_,
      Order_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Order, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Order));
  Order_CompType_descriptor_ = Order_descriptor_->enum_type(0);
  Order_ProductType_descriptor_ = Order_descriptor_->enum_type(1);
  Order_DeliveryGate_descriptor_ = Order_descriptor_->enum_type(2);
  OrderInfo_descriptor_ = file->message_type(1);
  static const int OrderInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderInfo, orders_),
  };
  OrderInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrderInfo_descriptor_,
      OrderInfo::default_instance_,
      OrderInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrderInfo));
  OrderInfo_CompType_descriptor_ = OrderInfo_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_OrderInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Order_descriptor_, &Order::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrderInfo_descriptor_, &OrderInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_OrderInfo_2eproto() {
  delete Order::default_instance_;
  delete Order_reflection_;
  delete OrderInfo::default_instance_;
  delete OrderInfo_reflection_;
}

void protobuf_AddDesc_OrderInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017OrderInfo.proto\022\tllsf_msgs\"\205\003\n\005Order\022\n"
    "\n\002id\030\001 \002(\r\022-\n\007product\030\002 \002(\0162\034.llsf_msgs."
    "Order.ProductType\022\032\n\022quantity_requested\030"
    "\003 \002(\r\022\032\n\022quantity_delivered\030\004 \002(\r\022\035\n\025del"
    "ivery_period_begin\030\006 \002(\r\022\033\n\023delivery_per"
    "iod_end\030\007 \002(\r\0229\n\rdelivery_gate\030\010 \001(\0162\035.l"
    "lsf_msgs.Order.DeliveryGate:\003ANY\022\022\n\nlate"
    "_order\030\024 \001(\010\"&\n\010CompType\022\014\n\007COMP_ID\020\320\017\022\014"
    "\n\010MSG_TYPE\020(\"%\n\013ProductType\022\006\n\002P1\020\001\022\006\n\002P"
    "2\020\002\022\006\n\002P3\020\003\"/\n\014DeliveryGate\022\007\n\003ANY\020\001\022\006\n\002"
    "D1\020\002\022\006\n\002D2\020\003\022\006\n\002D3\020\004\"U\n\tOrderInfo\022 \n\006ord"
    "ers\030\001 \003(\0132\020.llsf_msgs.Order\"&\n\010CompType\022"
    "\014\n\007COMP_ID\020\320\017\022\014\n\010MSG_TYPE\020)B2\n\037org.roboc"
    "up_logistics.llsf_msgsB\017OrderInfoProtos", 559);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "OrderInfo.proto", &protobuf_RegisterTypes);
  Order::default_instance_ = new Order();
  OrderInfo::default_instance_ = new OrderInfo();
  Order::default_instance_->InitAsDefaultInstance();
  OrderInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OrderInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OrderInfo_2eproto {
  StaticDescriptorInitializer_OrderInfo_2eproto() {
    protobuf_AddDesc_OrderInfo_2eproto();
  }
} static_descriptor_initializer_OrderInfo_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* Order_CompType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Order_CompType_descriptor_;
}
bool Order_CompType_IsValid(int value) {
  switch(value) {
    case 40:
    case 2000:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Order_CompType Order::COMP_ID;
const Order_CompType Order::MSG_TYPE;
const Order_CompType Order::CompType_MIN;
const Order_CompType Order::CompType_MAX;
const int Order::CompType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Order_ProductType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Order_ProductType_descriptor_;
}
bool Order_ProductType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Order_ProductType Order::P1;
const Order_ProductType Order::P2;
const Order_ProductType Order::P3;
const Order_ProductType Order::ProductType_MIN;
const Order_ProductType Order::ProductType_MAX;
const int Order::ProductType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Order_DeliveryGate_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Order_DeliveryGate_descriptor_;
}
bool Order_DeliveryGate_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Order_DeliveryGate Order::ANY;
const Order_DeliveryGate Order::D1;
const Order_DeliveryGate Order::D2;
const Order_DeliveryGate Order::D3;
const Order_DeliveryGate Order::DeliveryGate_MIN;
const Order_DeliveryGate Order::DeliveryGate_MAX;
const int Order::DeliveryGate_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Order::kIdFieldNumber;
const int Order::kProductFieldNumber;
const int Order::kQuantityRequestedFieldNumber;
const int Order::kQuantityDeliveredFieldNumber;
const int Order::kDeliveryPeriodBeginFieldNumber;
const int Order::kDeliveryPeriodEndFieldNumber;
const int Order::kDeliveryGateFieldNumber;
const int Order::kLateOrderFieldNumber;
#endif  // !_MSC_VER

Order::Order()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Order::InitAsDefaultInstance() {
}

Order::Order(const Order& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Order::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  product_ = 1;
  quantity_requested_ = 0u;
  quantity_delivered_ = 0u;
  delivery_period_begin_ = 0u;
  delivery_period_end_ = 0u;
  delivery_gate_ = 1;
  late_order_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Order::~Order() {
  SharedDtor();
}

void Order::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Order::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Order::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Order_descriptor_;
}

const Order& Order::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrderInfo_2eproto();  return *default_instance_;
}

Order* Order::default_instance_ = NULL;

Order* Order::New() const {
  return new Order;
}

void Order::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    product_ = 1;
    quantity_requested_ = 0u;
    quantity_delivered_ = 0u;
    delivery_period_begin_ = 0u;
    delivery_period_end_ = 0u;
    delivery_gate_ = 1;
    late_order_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Order::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_product;
        break;
      }
      
      // required .llsf_msgs.Order.ProductType product = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_product:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::llsf_msgs::Order_ProductType_IsValid(value)) {
            set_product(static_cast< ::llsf_msgs::Order_ProductType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_quantity_requested;
        break;
      }
      
      // required uint32 quantity_requested = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_quantity_requested:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quantity_requested_)));
          set_has_quantity_requested();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_quantity_delivered;
        break;
      }
      
      // required uint32 quantity_delivered = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_quantity_delivered:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quantity_delivered_)));
          set_has_quantity_delivered();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_delivery_period_begin;
        break;
      }
      
      // required uint32 delivery_period_begin = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_delivery_period_begin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &delivery_period_begin_)));
          set_has_delivery_period_begin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_delivery_period_end;
        break;
      }
      
      // required uint32 delivery_period_end = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_delivery_period_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &delivery_period_end_)));
          set_has_delivery_period_end();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_delivery_gate;
        break;
      }
      
      // optional .llsf_msgs.Order.DeliveryGate delivery_gate = 8 [default = ANY];
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_delivery_gate:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::llsf_msgs::Order_DeliveryGate_IsValid(value)) {
            set_delivery_gate(static_cast< ::llsf_msgs::Order_DeliveryGate >(value));
          } else {
            mutable_unknown_fields()->AddVarint(8, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(160)) goto parse_late_order;
        break;
      }
      
      // optional bool late_order = 20;
      case 20: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_late_order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &late_order_)));
          set_has_late_order();
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

void Order::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }
  
  // required .llsf_msgs.Order.ProductType product = 2;
  if (has_product()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->product(), output);
  }
  
  // required uint32 quantity_requested = 3;
  if (has_quantity_requested()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->quantity_requested(), output);
  }
  
  // required uint32 quantity_delivered = 4;
  if (has_quantity_delivered()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->quantity_delivered(), output);
  }
  
  // required uint32 delivery_period_begin = 6;
  if (has_delivery_period_begin()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->delivery_period_begin(), output);
  }
  
  // required uint32 delivery_period_end = 7;
  if (has_delivery_period_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->delivery_period_end(), output);
  }
  
  // optional .llsf_msgs.Order.DeliveryGate delivery_gate = 8 [default = ANY];
  if (has_delivery_gate()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->delivery_gate(), output);
  }
  
  // optional bool late_order = 20;
  if (has_late_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(20, this->late_order(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Order::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }
  
  // required .llsf_msgs.Order.ProductType product = 2;
  if (has_product()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->product(), target);
  }
  
  // required uint32 quantity_requested = 3;
  if (has_quantity_requested()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->quantity_requested(), target);
  }
  
  // required uint32 quantity_delivered = 4;
  if (has_quantity_delivered()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->quantity_delivered(), target);
  }
  
  // required uint32 delivery_period_begin = 6;
  if (has_delivery_period_begin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->delivery_period_begin(), target);
  }
  
  // required uint32 delivery_period_end = 7;
  if (has_delivery_period_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->delivery_period_end(), target);
  }
  
  // optional .llsf_msgs.Order.DeliveryGate delivery_gate = 8 [default = ANY];
  if (has_delivery_gate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->delivery_gate(), target);
  }
  
  // optional bool late_order = 20;
  if (has_late_order()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(20, this->late_order(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Order::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }
    
    // required .llsf_msgs.Order.ProductType product = 2;
    if (has_product()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->product());
    }
    
    // required uint32 quantity_requested = 3;
    if (has_quantity_requested()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->quantity_requested());
    }
    
    // required uint32 quantity_delivered = 4;
    if (has_quantity_delivered()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->quantity_delivered());
    }
    
    // required uint32 delivery_period_begin = 6;
    if (has_delivery_period_begin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->delivery_period_begin());
    }
    
    // required uint32 delivery_period_end = 7;
    if (has_delivery_period_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->delivery_period_end());
    }
    
    // optional .llsf_msgs.Order.DeliveryGate delivery_gate = 8 [default = ANY];
    if (has_delivery_gate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->delivery_gate());
    }
    
    // optional bool late_order = 20;
    if (has_late_order()) {
      total_size += 2 + 1;
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

void Order::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Order* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Order*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Order::MergeFrom(const Order& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_product()) {
      set_product(from.product());
    }
    if (from.has_quantity_requested()) {
      set_quantity_requested(from.quantity_requested());
    }
    if (from.has_quantity_delivered()) {
      set_quantity_delivered(from.quantity_delivered());
    }
    if (from.has_delivery_period_begin()) {
      set_delivery_period_begin(from.delivery_period_begin());
    }
    if (from.has_delivery_period_end()) {
      set_delivery_period_end(from.delivery_period_end());
    }
    if (from.has_delivery_gate()) {
      set_delivery_gate(from.delivery_gate());
    }
    if (from.has_late_order()) {
      set_late_order(from.late_order());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Order::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Order::CopyFrom(const Order& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Order::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;
  
  return true;
}

void Order::Swap(Order* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(product_, other->product_);
    std::swap(quantity_requested_, other->quantity_requested_);
    std::swap(quantity_delivered_, other->quantity_delivered_);
    std::swap(delivery_period_begin_, other->delivery_period_begin_);
    std::swap(delivery_period_end_, other->delivery_period_end_);
    std::swap(delivery_gate_, other->delivery_gate_);
    std::swap(late_order_, other->late_order_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Order::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Order_descriptor_;
  metadata.reflection = Order_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* OrderInfo_CompType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrderInfo_CompType_descriptor_;
}
bool OrderInfo_CompType_IsValid(int value) {
  switch(value) {
    case 41:
    case 2000:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const OrderInfo_CompType OrderInfo::COMP_ID;
const OrderInfo_CompType OrderInfo::MSG_TYPE;
const OrderInfo_CompType OrderInfo::CompType_MIN;
const OrderInfo_CompType OrderInfo::CompType_MAX;
const int OrderInfo::CompType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int OrderInfo::kOrdersFieldNumber;
#endif  // !_MSC_VER

OrderInfo::OrderInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OrderInfo::InitAsDefaultInstance() {
}

OrderInfo::OrderInfo(const OrderInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OrderInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrderInfo::~OrderInfo() {
  SharedDtor();
}

void OrderInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OrderInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrderInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrderInfo_descriptor_;
}

const OrderInfo& OrderInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrderInfo_2eproto();  return *default_instance_;
}

OrderInfo* OrderInfo::default_instance_ = NULL;

OrderInfo* OrderInfo::New() const {
  return new OrderInfo;
}

void OrderInfo::Clear() {
  orders_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrderInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .llsf_msgs.Order orders = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_orders:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_orders()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_orders;
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

void OrderInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .llsf_msgs.Order orders = 1;
  for (int i = 0; i < this->orders_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->orders(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OrderInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .llsf_msgs.Order orders = 1;
  for (int i = 0; i < this->orders_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->orders(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OrderInfo::ByteSize() const {
  int total_size = 0;
  
  // repeated .llsf_msgs.Order orders = 1;
  total_size += 1 * this->orders_size();
  for (int i = 0; i < this->orders_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->orders(i));
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

void OrderInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrderInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrderInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrderInfo::MergeFrom(const OrderInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  orders_.MergeFrom(from.orders_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrderInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrderInfo::CopyFrom(const OrderInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrderInfo::IsInitialized() const {
  
  for (int i = 0; i < orders_size(); i++) {
    if (!this->orders(i).IsInitialized()) return false;
  }
  return true;
}

void OrderInfo::Swap(OrderInfo* other) {
  if (other != this) {
    orders_.Swap(&other->orders_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrderInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrderInfo_descriptor_;
  metadata.reflection = OrderInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

// @@protoc_insertion_point(global_scope)
