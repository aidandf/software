// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: slam_msg.proto

#ifndef PROTOBUF_slam_5fmsg_2eproto__INCLUDED
#define PROTOBUF_slam_5fmsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace slam {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_slam_5fmsg_2eproto();
void protobuf_AssignDesc_slam_5fmsg_2eproto();
void protobuf_ShutdownFile_slam_5fmsg_2eproto();

class SlamMsg;

// ===================================================================

class SlamMsg : public ::google::protobuf::Message {
 public:
  SlamMsg();
  virtual ~SlamMsg();

  SlamMsg(const SlamMsg& from);

  inline SlamMsg& operator=(const SlamMsg& from) {
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
  static const SlamMsg& default_instance();

  void Swap(SlamMsg* other);

  // implements Message ----------------------------------------------

  SlamMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SlamMsg& from);
  void MergeFrom(const SlamMsg& from);
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

  // accessors -------------------------------------------------------

  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // required bool request = 2;
  inline bool has_request() const;
  inline void clear_request();
  static const int kRequestFieldNumber = 2;
  inline bool request() const;
  inline void set_request(bool value);

  // optional double m_x = 3;
  inline bool has_m_x() const;
  inline void clear_m_x();
  static const int kMXFieldNumber = 3;
  inline double m_x() const;
  inline void set_m_x(double value);

  // optional double m_y = 4;
  inline bool has_m_y() const;
  inline void clear_m_y();
  static const int kMYFieldNumber = 4;
  inline double m_y() const;
  inline void set_m_y(double value);

  // optional double m_z = 5;
  inline bool has_m_z() const;
  inline void clear_m_z();
  static const int kMZFieldNumber = 5;
  inline double m_z() const;
  inline void set_m_z(double value);

  // optional double u_x = 6;
  inline bool has_u_x() const;
  inline void clear_u_x();
  static const int kUXFieldNumber = 6;
  inline double u_x() const;
  inline void set_u_x(double value);

  // optional double u_y = 7;
  inline bool has_u_y() const;
  inline void clear_u_y();
  static const int kUYFieldNumber = 7;
  inline double u_y() const;
  inline void set_u_y(double value);

  // optional double u_z = 8;
  inline bool has_u_z() const;
  inline void clear_u_z();
  static const int kUZFieldNumber = 8;
  inline double u_z() const;
  inline void set_u_z(double value);

  // @@protoc_insertion_point(class_scope:slam.SlamMsg)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_request();
  inline void clear_has_request();
  inline void set_has_m_x();
  inline void clear_has_m_x();
  inline void set_has_m_y();
  inline void clear_has_m_y();
  inline void set_has_m_z();
  inline void clear_has_m_z();
  inline void set_has_u_x();
  inline void clear_has_u_x();
  inline void set_has_u_y();
  inline void clear_has_u_y();
  inline void set_has_u_z();
  inline void clear_has_u_z();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* id_;
  double m_x_;
  double m_y_;
  double m_z_;
  double u_x_;
  double u_y_;
  double u_z_;
  bool request_;
  friend void  protobuf_AddDesc_slam_5fmsg_2eproto();
  friend void protobuf_AssignDesc_slam_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_slam_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static SlamMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// SlamMsg

// required string id = 1;
inline bool SlamMsg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SlamMsg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SlamMsg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SlamMsg::clear_id() {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& SlamMsg::id() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.id)
  return *id_;
}
inline void SlamMsg::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set:slam.SlamMsg.id)
}
inline void SlamMsg::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set_char:slam.SlamMsg.id)
}
inline void SlamMsg::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:slam.SlamMsg.id)
}
inline ::std::string* SlamMsg::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:slam.SlamMsg.id)
  return id_;
}
inline ::std::string* SlamMsg::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void SlamMsg::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:slam.SlamMsg.id)
}

// required bool request = 2;
inline bool SlamMsg::has_request() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SlamMsg::set_has_request() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SlamMsg::clear_has_request() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SlamMsg::clear_request() {
  request_ = false;
  clear_has_request();
}
inline bool SlamMsg::request() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.request)
  return request_;
}
inline void SlamMsg::set_request(bool value) {
  set_has_request();
  request_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.request)
}

// optional double m_x = 3;
inline bool SlamMsg::has_m_x() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SlamMsg::set_has_m_x() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SlamMsg::clear_has_m_x() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SlamMsg::clear_m_x() {
  m_x_ = 0;
  clear_has_m_x();
}
inline double SlamMsg::m_x() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.m_x)
  return m_x_;
}
inline void SlamMsg::set_m_x(double value) {
  set_has_m_x();
  m_x_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.m_x)
}

// optional double m_y = 4;
inline bool SlamMsg::has_m_y() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SlamMsg::set_has_m_y() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SlamMsg::clear_has_m_y() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SlamMsg::clear_m_y() {
  m_y_ = 0;
  clear_has_m_y();
}
inline double SlamMsg::m_y() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.m_y)
  return m_y_;
}
inline void SlamMsg::set_m_y(double value) {
  set_has_m_y();
  m_y_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.m_y)
}

// optional double m_z = 5;
inline bool SlamMsg::has_m_z() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SlamMsg::set_has_m_z() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SlamMsg::clear_has_m_z() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SlamMsg::clear_m_z() {
  m_z_ = 0;
  clear_has_m_z();
}
inline double SlamMsg::m_z() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.m_z)
  return m_z_;
}
inline void SlamMsg::set_m_z(double value) {
  set_has_m_z();
  m_z_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.m_z)
}

// optional double u_x = 6;
inline bool SlamMsg::has_u_x() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SlamMsg::set_has_u_x() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SlamMsg::clear_has_u_x() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SlamMsg::clear_u_x() {
  u_x_ = 0;
  clear_has_u_x();
}
inline double SlamMsg::u_x() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.u_x)
  return u_x_;
}
inline void SlamMsg::set_u_x(double value) {
  set_has_u_x();
  u_x_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.u_x)
}

// optional double u_y = 7;
inline bool SlamMsg::has_u_y() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SlamMsg::set_has_u_y() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SlamMsg::clear_has_u_y() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SlamMsg::clear_u_y() {
  u_y_ = 0;
  clear_has_u_y();
}
inline double SlamMsg::u_y() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.u_y)
  return u_y_;
}
inline void SlamMsg::set_u_y(double value) {
  set_has_u_y();
  u_y_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.u_y)
}

// optional double u_z = 8;
inline bool SlamMsg::has_u_z() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SlamMsg::set_has_u_z() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SlamMsg::clear_has_u_z() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SlamMsg::clear_u_z() {
  u_z_ = 0;
  clear_has_u_z();
}
inline double SlamMsg::u_z() const {
  // @@protoc_insertion_point(field_get:slam.SlamMsg.u_z)
  return u_z_;
}
inline void SlamMsg::set_u_z(double value) {
  set_has_u_z();
  u_z_ = value;
  // @@protoc_insertion_point(field_set:slam.SlamMsg.u_z)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace slam

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_slam_5fmsg_2eproto__INCLUDED
