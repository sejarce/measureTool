// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: YZMMeasureDocument.proto

#ifndef PROTOBUF_YZMMeasureDocument_2eproto__INCLUDED
#define PROTOBUF_YZMMeasureDocument_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "YZMMeasureItem.pb.h"
// @@protoc_insertion_point(includes)
namespace yzm {
class MeasureDocument;
class MeasureDocumentDefaultTypeInternal;
extern MeasureDocumentDefaultTypeInternal _MeasureDocument_default_instance_;
class MeasureItem;
class MeasureItemDefaultTypeInternal;
extern MeasureItemDefaultTypeInternal _MeasureItem_default_instance_;
class Vector3;
class Vector3DefaultTypeInternal;
extern Vector3DefaultTypeInternal _Vector3_default_instance_;
}  // namespace yzm

namespace yzm {

namespace protobuf_YZMMeasureDocument_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_YZMMeasureDocument_2eproto

// ===================================================================

class MeasureDocument : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:yzm.MeasureDocument) */ {
 public:
  MeasureDocument();
  virtual ~MeasureDocument();

  MeasureDocument(const MeasureDocument& from);

  inline MeasureDocument& operator=(const MeasureDocument& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MeasureDocument& default_instance();

  static inline const MeasureDocument* internal_default_instance() {
    return reinterpret_cast<const MeasureDocument*>(
               &_MeasureDocument_default_instance_);
  }

  void Swap(MeasureDocument* other);

  // implements Message ----------------------------------------------

  inline MeasureDocument* New() const PROTOBUF_FINAL { return New(NULL); }

  MeasureDocument* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MeasureDocument& from);
  void MergeFrom(const MeasureDocument& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MeasureDocument* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .yzm.MeasureItem item_list = 3;
  int item_list_size() const;
  void clear_item_list();
  static const int kItemListFieldNumber = 3;
  const ::yzm::MeasureItem& item_list(int index) const;
  ::yzm::MeasureItem* mutable_item_list(int index);
  ::yzm::MeasureItem* add_item_list();
  ::google::protobuf::RepeatedPtrField< ::yzm::MeasureItem >*
      mutable_item_list();
  const ::google::protobuf::RepeatedPtrField< ::yzm::MeasureItem >&
      item_list() const;

  // .yzm.Vector3 croth_point = 4;
  bool has_croth_point() const;
  void clear_croth_point();
  static const int kCrothPointFieldNumber = 4;
  const ::yzm::Vector3& croth_point() const;
  ::yzm::Vector3* mutable_croth_point();
  ::yzm::Vector3* release_croth_point();
  void set_allocated_croth_point(::yzm::Vector3* croth_point);

  // .yzm.Vector3 left_armpit_point = 5;
  bool has_left_armpit_point() const;
  void clear_left_armpit_point();
  static const int kLeftArmpitPointFieldNumber = 5;
  const ::yzm::Vector3& left_armpit_point() const;
  ::yzm::Vector3* mutable_left_armpit_point();
  ::yzm::Vector3* release_left_armpit_point();
  void set_allocated_left_armpit_point(::yzm::Vector3* left_armpit_point);

  // .yzm.Vector3 right_armpit_point = 6;
  bool has_right_armpit_point() const;
  void clear_right_armpit_point();
  static const int kRightArmpitPointFieldNumber = 6;
  const ::yzm::Vector3& right_armpit_point() const;
  ::yzm::Vector3* mutable_right_armpit_point();
  ::yzm::Vector3* release_right_armpit_point();
  void set_allocated_right_armpit_point(::yzm::Vector3* right_armpit_point);

  // uint32 doc_index = 1;
  void clear_doc_index();
  static const int kDocIndexFieldNumber = 1;
  ::google::protobuf::uint32 doc_index() const;
  void set_doc_index(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:yzm.MeasureDocument)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::yzm::MeasureItem > item_list_;
  ::yzm::Vector3* croth_point_;
  ::yzm::Vector3* left_armpit_point_;
  ::yzm::Vector3* right_armpit_point_;
  ::google::protobuf::uint32 doc_index_;
  mutable int _cached_size_;
  friend struct  protobuf_YZMMeasureDocument_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MeasureDocument

// uint32 doc_index = 1;
inline void MeasureDocument::clear_doc_index() {
  doc_index_ = 0u;
}
inline ::google::protobuf::uint32 MeasureDocument::doc_index() const {
  // @@protoc_insertion_point(field_get:yzm.MeasureDocument.doc_index)
  return doc_index_;
}
inline void MeasureDocument::set_doc_index(::google::protobuf::uint32 value) {
  
  doc_index_ = value;
  // @@protoc_insertion_point(field_set:yzm.MeasureDocument.doc_index)
}

// repeated .yzm.MeasureItem item_list = 3;
inline int MeasureDocument::item_list_size() const {
  return item_list_.size();
}
inline void MeasureDocument::clear_item_list() {
  item_list_.Clear();
}
inline const ::yzm::MeasureItem& MeasureDocument::item_list(int index) const {
  // @@protoc_insertion_point(field_get:yzm.MeasureDocument.item_list)
  return item_list_.Get(index);
}
inline ::yzm::MeasureItem* MeasureDocument::mutable_item_list(int index) {
  // @@protoc_insertion_point(field_mutable:yzm.MeasureDocument.item_list)
  return item_list_.Mutable(index);
}
inline ::yzm::MeasureItem* MeasureDocument::add_item_list() {
  // @@protoc_insertion_point(field_add:yzm.MeasureDocument.item_list)
  return item_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::yzm::MeasureItem >*
MeasureDocument::mutable_item_list() {
  // @@protoc_insertion_point(field_mutable_list:yzm.MeasureDocument.item_list)
  return &item_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::yzm::MeasureItem >&
MeasureDocument::item_list() const {
  // @@protoc_insertion_point(field_list:yzm.MeasureDocument.item_list)
  return item_list_;
}

// .yzm.Vector3 croth_point = 4;
inline bool MeasureDocument::has_croth_point() const {
  return this != internal_default_instance() && croth_point_ != NULL;
}
inline void MeasureDocument::clear_croth_point() {
  if (GetArenaNoVirtual() == NULL && croth_point_ != NULL) delete croth_point_;
  croth_point_ = NULL;
}
inline const ::yzm::Vector3& MeasureDocument::croth_point() const {
  // @@protoc_insertion_point(field_get:yzm.MeasureDocument.croth_point)
  return croth_point_ != NULL ? *croth_point_
                         : *::yzm::Vector3::internal_default_instance();
}
inline ::yzm::Vector3* MeasureDocument::mutable_croth_point() {
  
  if (croth_point_ == NULL) {
    croth_point_ = new ::yzm::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:yzm.MeasureDocument.croth_point)
  return croth_point_;
}
inline ::yzm::Vector3* MeasureDocument::release_croth_point() {
  // @@protoc_insertion_point(field_release:yzm.MeasureDocument.croth_point)
  
  ::yzm::Vector3* temp = croth_point_;
  croth_point_ = NULL;
  return temp;
}
inline void MeasureDocument::set_allocated_croth_point(::yzm::Vector3* croth_point) {
  delete croth_point_;
  croth_point_ = croth_point;
  if (croth_point) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:yzm.MeasureDocument.croth_point)
}

// .yzm.Vector3 left_armpit_point = 5;
inline bool MeasureDocument::has_left_armpit_point() const {
  return this != internal_default_instance() && left_armpit_point_ != NULL;
}
inline void MeasureDocument::clear_left_armpit_point() {
  if (GetArenaNoVirtual() == NULL && left_armpit_point_ != NULL) delete left_armpit_point_;
  left_armpit_point_ = NULL;
}
inline const ::yzm::Vector3& MeasureDocument::left_armpit_point() const {
  // @@protoc_insertion_point(field_get:yzm.MeasureDocument.left_armpit_point)
  return left_armpit_point_ != NULL ? *left_armpit_point_
                         : *::yzm::Vector3::internal_default_instance();
}
inline ::yzm::Vector3* MeasureDocument::mutable_left_armpit_point() {
  
  if (left_armpit_point_ == NULL) {
    left_armpit_point_ = new ::yzm::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:yzm.MeasureDocument.left_armpit_point)
  return left_armpit_point_;
}
inline ::yzm::Vector3* MeasureDocument::release_left_armpit_point() {
  // @@protoc_insertion_point(field_release:yzm.MeasureDocument.left_armpit_point)
  
  ::yzm::Vector3* temp = left_armpit_point_;
  left_armpit_point_ = NULL;
  return temp;
}
inline void MeasureDocument::set_allocated_left_armpit_point(::yzm::Vector3* left_armpit_point) {
  delete left_armpit_point_;
  left_armpit_point_ = left_armpit_point;
  if (left_armpit_point) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:yzm.MeasureDocument.left_armpit_point)
}

// .yzm.Vector3 right_armpit_point = 6;
inline bool MeasureDocument::has_right_armpit_point() const {
  return this != internal_default_instance() && right_armpit_point_ != NULL;
}
inline void MeasureDocument::clear_right_armpit_point() {
  if (GetArenaNoVirtual() == NULL && right_armpit_point_ != NULL) delete right_armpit_point_;
  right_armpit_point_ = NULL;
}
inline const ::yzm::Vector3& MeasureDocument::right_armpit_point() const {
  // @@protoc_insertion_point(field_get:yzm.MeasureDocument.right_armpit_point)
  return right_armpit_point_ != NULL ? *right_armpit_point_
                         : *::yzm::Vector3::internal_default_instance();
}
inline ::yzm::Vector3* MeasureDocument::mutable_right_armpit_point() {
  
  if (right_armpit_point_ == NULL) {
    right_armpit_point_ = new ::yzm::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:yzm.MeasureDocument.right_armpit_point)
  return right_armpit_point_;
}
inline ::yzm::Vector3* MeasureDocument::release_right_armpit_point() {
  // @@protoc_insertion_point(field_release:yzm.MeasureDocument.right_armpit_point)
  
  ::yzm::Vector3* temp = right_armpit_point_;
  right_armpit_point_ = NULL;
  return temp;
}
inline void MeasureDocument::set_allocated_right_armpit_point(::yzm::Vector3* right_armpit_point) {
  delete right_armpit_point_;
  right_armpit_point_ = right_armpit_point;
  if (right_armpit_point) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:yzm.MeasureDocument.right_armpit_point)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace yzm

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_YZMMeasureDocument_2eproto__INCLUDED
