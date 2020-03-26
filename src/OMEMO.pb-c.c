/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: OMEMO.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "OMEMO.pb-c.h"
void   omemo__omemomessage__init
                     (Omemo__OMEMOMessage         *message)
{
  static const Omemo__OMEMOMessage init_value = OMEMO__OMEMOMESSAGE__INIT;
  *message = init_value;
}
size_t omemo__omemomessage__get_packed_size
                     (const Omemo__OMEMOMessage *message)
{
  assert(message->base.descriptor == &omemo__omemomessage__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t omemo__omemomessage__pack
                     (const Omemo__OMEMOMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &omemo__omemomessage__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t omemo__omemomessage__pack_to_buffer
                     (const Omemo__OMEMOMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &omemo__omemomessage__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Omemo__OMEMOMessage *
       omemo__omemomessage__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Omemo__OMEMOMessage *)
     protobuf_c_message_unpack (&omemo__omemomessage__descriptor,
                                allocator, len, data);
}
void   omemo__omemomessage__free_unpacked
                     (Omemo__OMEMOMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &omemo__omemomessage__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   omemo__omemoauthenticated_message__init
                     (Omemo__OMEMOAuthenticatedMessage         *message)
{
  static const Omemo__OMEMOAuthenticatedMessage init_value = OMEMO__OMEMOAUTHENTICATED_MESSAGE__INIT;
  *message = init_value;
}
size_t omemo__omemoauthenticated_message__get_packed_size
                     (const Omemo__OMEMOAuthenticatedMessage *message)
{
  assert(message->base.descriptor == &omemo__omemoauthenticated_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t omemo__omemoauthenticated_message__pack
                     (const Omemo__OMEMOAuthenticatedMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &omemo__omemoauthenticated_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t omemo__omemoauthenticated_message__pack_to_buffer
                     (const Omemo__OMEMOAuthenticatedMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &omemo__omemoauthenticated_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Omemo__OMEMOAuthenticatedMessage *
       omemo__omemoauthenticated_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Omemo__OMEMOAuthenticatedMessage *)
     protobuf_c_message_unpack (&omemo__omemoauthenticated_message__descriptor,
                                allocator, len, data);
}
void   omemo__omemoauthenticated_message__free_unpacked
                     (Omemo__OMEMOAuthenticatedMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &omemo__omemoauthenticated_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   omemo__omemokey_exchange__init
                     (Omemo__OMEMOKeyExchange         *message)
{
  static const Omemo__OMEMOKeyExchange init_value = OMEMO__OMEMOKEY_EXCHANGE__INIT;
  *message = init_value;
}
size_t omemo__omemokey_exchange__get_packed_size
                     (const Omemo__OMEMOKeyExchange *message)
{
  assert(message->base.descriptor == &omemo__omemokey_exchange__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t omemo__omemokey_exchange__pack
                     (const Omemo__OMEMOKeyExchange *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &omemo__omemokey_exchange__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t omemo__omemokey_exchange__pack_to_buffer
                     (const Omemo__OMEMOKeyExchange *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &omemo__omemokey_exchange__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Omemo__OMEMOKeyExchange *
       omemo__omemokey_exchange__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Omemo__OMEMOKeyExchange *)
     protobuf_c_message_unpack (&omemo__omemokey_exchange__descriptor,
                                allocator, len, data);
}
void   omemo__omemokey_exchange__free_unpacked
                     (Omemo__OMEMOKeyExchange *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &omemo__omemokey_exchange__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor omemo__omemomessage__field_descriptors[4] =
{
  {
    "n",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOMessage, n),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pn",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOMessage, pn),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dh_pub",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOMessage, dh_pub),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ciphertext",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Omemo__OMEMOMessage, has_ciphertext),
    offsetof(Omemo__OMEMOMessage, ciphertext),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned omemo__omemomessage__field_indices_by_name[] = {
  3,   /* field[3] = ciphertext */
  2,   /* field[2] = dh_pub */
  0,   /* field[0] = n */
  1,   /* field[1] = pn */
};
static const ProtobufCIntRange omemo__omemomessage__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor omemo__omemomessage__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "omemo.OMEMOMessage",
  "OMEMOMessage",
  "Omemo__OMEMOMessage",
  "omemo",
  sizeof(Omemo__OMEMOMessage),
  4,
  omemo__omemomessage__field_descriptors,
  omemo__omemomessage__field_indices_by_name,
  1,  omemo__omemomessage__number_ranges,
  (ProtobufCMessageInit) omemo__omemomessage__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor omemo__omemoauthenticated_message__field_descriptors[2] =
{
  {
    "mac",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOAuthenticatedMessage, mac),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "message",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOAuthenticatedMessage, message),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned omemo__omemoauthenticated_message__field_indices_by_name[] = {
  0,   /* field[0] = mac */
  1,   /* field[1] = message */
};
static const ProtobufCIntRange omemo__omemoauthenticated_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor omemo__omemoauthenticated_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "omemo.OMEMOAuthenticatedMessage",
  "OMEMOAuthenticatedMessage",
  "Omemo__OMEMOAuthenticatedMessage",
  "omemo",
  sizeof(Omemo__OMEMOAuthenticatedMessage),
  2,
  omemo__omemoauthenticated_message__field_descriptors,
  omemo__omemoauthenticated_message__field_indices_by_name,
  1,  omemo__omemoauthenticated_message__number_ranges,
  (ProtobufCMessageInit) omemo__omemoauthenticated_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor omemo__omemokey_exchange__field_descriptors[5] =
{
  {
    "pk_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOKeyExchange, pk_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "spk_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOKeyExchange, spk_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ik",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOKeyExchange, ik),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ek",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOKeyExchange, ek),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "message",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Omemo__OMEMOKeyExchange, message),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned omemo__omemokey_exchange__field_indices_by_name[] = {
  3,   /* field[3] = ek */
  2,   /* field[2] = ik */
  4,   /* field[4] = message */
  0,   /* field[0] = pk_id */
  1,   /* field[1] = spk_id */
};
static const ProtobufCIntRange omemo__omemokey_exchange__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor omemo__omemokey_exchange__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "omemo.OMEMOKeyExchange",
  "OMEMOKeyExchange",
  "Omemo__OMEMOKeyExchange",
  "omemo",
  sizeof(Omemo__OMEMOKeyExchange),
  5,
  omemo__omemokey_exchange__field_descriptors,
  omemo__omemokey_exchange__field_indices_by_name,
  1,  omemo__omemokey_exchange__number_ranges,
  (ProtobufCMessageInit) omemo__omemokey_exchange__init,
  NULL,NULL,NULL    /* reserved[123] */
};
