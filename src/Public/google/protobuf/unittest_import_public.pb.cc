// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_import_public.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_import_public.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest_import {

namespace {

const ::google::protobuf::Descriptor* PublicImportMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PublicImportMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_import_public.proto");
  GOOGLE_CHECK(file != NULL);
  PublicImportMessage_descriptor_ = file->message_type(0);
  static const int PublicImportMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PublicImportMessage, e_),
  };
  PublicImportMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PublicImportMessage_descriptor_,
      PublicImportMessage::default_instance_,
      PublicImportMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PublicImportMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(PublicImportMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PublicImportMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PublicImportMessage_descriptor_, &PublicImportMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto() {
  delete PublicImportMessage::default_instance_;
  delete PublicImportMessage_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n,google/protobuf/unittest_import_public"
    ".proto\022\030protobuf_unittest_import\" \n\023Publ"
    "icImportMessage\022\t\n\001e\030\001 \001(\005B\032\n\030com.google"
    ".protobuf.test", 134);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_import_public.proto", &protobuf_RegisterTypes);
  PublicImportMessage::default_instance_ = new PublicImportMessage();
  PublicImportMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int PublicImportMessage::kEFieldNumber;
#endif  // !_MSC_VER

PublicImportMessage::PublicImportMessage()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest_import.PublicImportMessage)
}

void PublicImportMessage::InitAsDefaultInstance() {
}

PublicImportMessage::PublicImportMessage(const PublicImportMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest_import.PublicImportMessage)
}

void PublicImportMessage::SharedCtor() {
  _cached_size_ = 0;
  e_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PublicImportMessage::~PublicImportMessage() {
  // @@protoc_insertion_point(destructor:protobuf_unittest_import.PublicImportMessage)
  SharedDtor();
}

void PublicImportMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PublicImportMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PublicImportMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PublicImportMessage_descriptor_;
}

const PublicImportMessage& PublicImportMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto();
  return *default_instance_;
}

PublicImportMessage* PublicImportMessage::default_instance_ = NULL;

PublicImportMessage* PublicImportMessage::New(::google::protobuf::Arena* arena) const {
  PublicImportMessage* n = new PublicImportMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PublicImportMessage::Clear() {
  e_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PublicImportMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest_import.PublicImportMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 e = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &e_)));
          set_has_e();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest_import.PublicImportMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest_import.PublicImportMessage)
  return false;
#undef DO_
}

void PublicImportMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest_import.PublicImportMessage)
  // optional int32 e = 1;
  if (has_e()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->e(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest_import.PublicImportMessage)
}

::google::protobuf::uint8* PublicImportMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest_import.PublicImportMessage)
  // optional int32 e = 1;
  if (has_e()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->e(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest_import.PublicImportMessage)
  return target;
}

int PublicImportMessage::ByteSize() const {
  int total_size = 0;

  // optional int32 e = 1;
  if (has_e()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->e());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PublicImportMessage::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PublicImportMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PublicImportMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PublicImportMessage::MergeFrom(const PublicImportMessage& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_e()) {
      set_e(from.e());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PublicImportMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PublicImportMessage::CopyFrom(const PublicImportMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PublicImportMessage::IsInitialized() const {

  return true;
}

void PublicImportMessage::Swap(PublicImportMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PublicImportMessage::InternalSwap(PublicImportMessage* other) {
  std::swap(e_, other->e_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PublicImportMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PublicImportMessage_descriptor_;
  metadata.reflection = PublicImportMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PublicImportMessage

// optional int32 e = 1;
 bool PublicImportMessage::has_e() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void PublicImportMessage::set_has_e() {
  _has_bits_[0] |= 0x00000001u;
}
 void PublicImportMessage::clear_has_e() {
  _has_bits_[0] &= ~0x00000001u;
}
 void PublicImportMessage::clear_e() {
  e_ = 0;
  clear_has_e();
}
 ::google::protobuf::int32 PublicImportMessage::e() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest_import.PublicImportMessage.e)
  return e_;
}
 void PublicImportMessage::set_e(::google::protobuf::int32 value) {
  set_has_e();
  e_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest_import.PublicImportMessage.e)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest_import

// @@protoc_insertion_point(global_scope)
