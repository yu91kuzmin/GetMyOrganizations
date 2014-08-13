// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/NonformalizedDocument.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NonformalizedDocument.pb.h"

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

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Documents {
namespace NonformalizedDocument {

namespace {

const ::google::protobuf::Descriptor* NonformalizedDocumentMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NonformalizedDocumentMetadata_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* NonformalizedDocumentStatus_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Documents_2fNonformalizedDocument_2eproto() {
  protobuf_AddDesc_Documents_2fNonformalizedDocument_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Documents/NonformalizedDocument.proto");
  GOOGLE_CHECK(file != NULL);
  NonformalizedDocumentMetadata_descriptor_ = file->message_type(0);
  static const int NonformalizedDocumentMetadata_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NonformalizedDocumentMetadata, documentstatus_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NonformalizedDocumentMetadata, receiptstatus_),
  };
  NonformalizedDocumentMetadata_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      NonformalizedDocumentMetadata_descriptor_,
      NonformalizedDocumentMetadata::default_instance_,
      NonformalizedDocumentMetadata_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NonformalizedDocumentMetadata, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NonformalizedDocumentMetadata, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(NonformalizedDocumentMetadata));
  NonformalizedDocumentStatus_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Documents_2fNonformalizedDocument_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    NonformalizedDocumentMetadata_descriptor_, &NonformalizedDocumentMetadata::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Documents_2fNonformalizedDocument_2eproto() {
  delete NonformalizedDocumentMetadata::default_instance_;
  delete NonformalizedDocumentMetadata_reflection_;
}

void protobuf_AddDesc_Documents_2fNonformalizedDocument_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::Documents::protobuf_AddDesc_Documents_2fReceiptStatus_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%Documents/NonformalizedDocument.proto\022"
    "0Diadoc.Api.Proto.Documents.Nonformalize"
    "dDocument\032\035Documents/ReceiptStatus.proto"
    "\"\203\002\n\035NonformalizedDocumentMetadata\022\211\001\n\016D"
    "ocumentStatus\030\001 \001(\0162M.Diadoc.Api.Proto.D"
    "ocuments.NonformalizedDocument.Nonformal"
    "izedDocumentStatus:\"UnknownNonformalized"
    "DocumentStatus\022V\n\rReceiptStatus\030\002 \001(\0162)."
    "Diadoc.Api.Proto.Documents.ReceiptStatus"
    ":\024UnknownReceiptStatus*\226\006\n\033Nonformalized"
    "DocumentStatus\022&\n\"UnknownNonformalizedDo"
    "cumentStatus\020\000\022\'\n#OutboundNoRecipientSig"
    "natureRequest\020\001\022(\n$OutboundWaitingForRec"
    "ipientSignature\020\002\022\"\n\036OutboundWithRecipie"
    "ntSignature\020\003\022-\n)OutboundRecipientSignat"
    "ureRequestRejected\020\004\022%\n!OutboundWaitingF"
    "orSenderSignature\020\r\022\"\n\036OutboundInvalidSe"
    "nderSignature\020\016\022&\n\"InboundNoRecipientSig"
    "natureRequest\020\005\022\'\n#InboundWaitingForReci"
    "pientSignature\020\006\022!\n\035InboundWithRecipient"
    "Signature\020\007\022,\n(InboundRecipientSignature"
    "RequestRejected\020\010\022$\n InboundInvalidRecip"
    "ientSignature\020\017\022\'\n#InternalNoRecipientSi"
    "gnatureRequest\020\t\022(\n$InternalWaitingForRe"
    "cipientSignature\020\n\022\"\n\036InternalWithRecipi"
    "entSignature\020\013\022-\n)InternalRecipientSigna"
    "tureRequestRejected\020\014\022%\n!InternalWaiting"
    "ForSenderSignature\020\020\022\"\n\036InternalInvalidS"
    "enderSignature\020\021\022%\n!InternalInvalidRecip"
    "ientSignature\020\022", 1175);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Documents/NonformalizedDocument.proto", &protobuf_RegisterTypes);
  NonformalizedDocumentMetadata::default_instance_ = new NonformalizedDocumentMetadata();
  NonformalizedDocumentMetadata::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Documents_2fNonformalizedDocument_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Documents_2fNonformalizedDocument_2eproto {
  StaticDescriptorInitializer_Documents_2fNonformalizedDocument_2eproto() {
    protobuf_AddDesc_Documents_2fNonformalizedDocument_2eproto();
  }
} static_descriptor_initializer_Documents_2fNonformalizedDocument_2eproto_;
const ::google::protobuf::EnumDescriptor* NonformalizedDocumentStatus_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NonformalizedDocumentStatus_descriptor_;
}
bool NonformalizedDocumentStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int NonformalizedDocumentMetadata::kDocumentStatusFieldNumber;
const int NonformalizedDocumentMetadata::kReceiptStatusFieldNumber;
#endif  // !_MSC_VER

NonformalizedDocumentMetadata::NonformalizedDocumentMetadata()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void NonformalizedDocumentMetadata::InitAsDefaultInstance() {
}

NonformalizedDocumentMetadata::NonformalizedDocumentMetadata(const NonformalizedDocumentMetadata& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void NonformalizedDocumentMetadata::SharedCtor() {
  _cached_size_ = 0;
  documentstatus_ = 0;
  receiptstatus_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NonformalizedDocumentMetadata::~NonformalizedDocumentMetadata() {
  SharedDtor();
}

void NonformalizedDocumentMetadata::SharedDtor() {
  if (this != default_instance_) {
  }
}

void NonformalizedDocumentMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NonformalizedDocumentMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NonformalizedDocumentMetadata_descriptor_;
}

const NonformalizedDocumentMetadata& NonformalizedDocumentMetadata::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Documents_2fNonformalizedDocument_2eproto();
  return *default_instance_;
}

NonformalizedDocumentMetadata* NonformalizedDocumentMetadata::default_instance_ = NULL;

NonformalizedDocumentMetadata* NonformalizedDocumentMetadata::New() const {
  return new NonformalizedDocumentMetadata;
}

void NonformalizedDocumentMetadata::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    documentstatus_ = 0;
    receiptstatus_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool NonformalizedDocumentMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentStatus DocumentStatus = 1 [default = UnknownNonformalizedDocumentStatus];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus_IsValid(value)) {
            set_documentstatus(static_cast< ::Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ReceiptStatus;
        break;
      }

      // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ReceiptStatus:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::Documents::ReceiptStatus_IsValid(value)) {
            set_receiptstatus(static_cast< ::Diadoc::Api::Proto::Documents::ReceiptStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
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

void NonformalizedDocumentMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentStatus DocumentStatus = 1 [default = UnknownNonformalizedDocumentStatus];
  if (has_documentstatus()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->documentstatus(), output);
  }

  // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
  if (has_receiptstatus()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->receiptstatus(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* NonformalizedDocumentMetadata::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentStatus DocumentStatus = 1 [default = UnknownNonformalizedDocumentStatus];
  if (has_documentstatus()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->documentstatus(), target);
  }

  // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
  if (has_receiptstatus()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->receiptstatus(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int NonformalizedDocumentMetadata::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentStatus DocumentStatus = 1 [default = UnknownNonformalizedDocumentStatus];
    if (has_documentstatus()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->documentstatus());
    }

    // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
    if (has_receiptstatus()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->receiptstatus());
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

void NonformalizedDocumentMetadata::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const NonformalizedDocumentMetadata* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const NonformalizedDocumentMetadata*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void NonformalizedDocumentMetadata::MergeFrom(const NonformalizedDocumentMetadata& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_documentstatus()) {
      set_documentstatus(from.documentstatus());
    }
    if (from.has_receiptstatus()) {
      set_receiptstatus(from.receiptstatus());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void NonformalizedDocumentMetadata::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NonformalizedDocumentMetadata::CopyFrom(const NonformalizedDocumentMetadata& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NonformalizedDocumentMetadata::IsInitialized() const {

  return true;
}

void NonformalizedDocumentMetadata::Swap(NonformalizedDocumentMetadata* other) {
  if (other != this) {
    std::swap(documentstatus_, other->documentstatus_);
    std::swap(receiptstatus_, other->receiptstatus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata NonformalizedDocumentMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NonformalizedDocumentMetadata_descriptor_;
  metadata.reflection = NonformalizedDocumentMetadata_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NonformalizedDocument
}  // namespace Documents
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
