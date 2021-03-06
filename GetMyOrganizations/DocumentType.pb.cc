// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DocumentType.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DocumentType.pb.h"

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

namespace {

const ::google::protobuf::EnumDescriptor* DocumentType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_DocumentType_2eproto() {
  protobuf_AddDesc_DocumentType_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DocumentType.proto");
  GOOGLE_CHECK(file != NULL);
  DocumentType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DocumentType_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_DocumentType_2eproto() {
}

void protobuf_AddDesc_DocumentType_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022DocumentType.proto\022\020Diadoc.Api.Proto*\245"
    "\003\n\014DocumentType\022 \n\023UnknownDocumentType\020\377"
    "\377\377\377\377\377\377\377\377\001\022\021\n\rNonformalized\020\000\022\013\n\007Invoice\020"
    "\001\022\032\n\026TrustConnectionRequest\020\013\022\n\n\006Torg12\020"
    "\014\022\023\n\017InvoiceRevision\020\r\022\025\n\021InvoiceCorrect"
    "ion\020\016\022\035\n\031InvoiceCorrectionRevision\020\017\022\031\n\025"
    "AcceptanceCertificate\020\020\022\023\n\017ProformaInvoi"
    "ce\020\022\022\r\n\tXmlTorg12\020\023\022\034\n\030XmlAcceptanceCert"
    "ificate\020\024\022\r\n\tPriceList\020\032\022\026\n\022PriceListAgr"
    "eement\020\036\022\027\n\023CertificateRegistry\020\"\022\025\n\021Rec"
    "onciliationAct\020#\022\014\n\010Contract\020$\022\n\n\006Torg13"
    "\020%\022\022\n\016ServiceDetails\020&", 462);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DocumentType.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DocumentType_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DocumentType_2eproto {
  StaticDescriptorInitializer_DocumentType_2eproto() {
    protobuf_AddDesc_DocumentType_2eproto();
  }
} static_descriptor_initializer_DocumentType_2eproto_;
const ::google::protobuf::EnumDescriptor* DocumentType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DocumentType_descriptor_;
}
bool DocumentType_IsValid(int value) {
  switch(value) {
    case -1:
    case 0:
    case 1:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
    case 20:
    case 26:
    case 30:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
