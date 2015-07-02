/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef counter_TYPES_H
#define counter_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace counterService {

//typedef int32_t int;

//typedef int64_t long;

class Account;

class ServerFigure;

typedef struct _Account__isset {
  _Account__isset() : id(false), visitor(false) {}
  bool id :1;
  bool visitor :1;
} _Account__isset;

class Account {
 public:

  static const char* ascii_fingerprint; // = "1CCCF6FC31CFD1D61BBBB1BAF3590620";
  static const uint8_t binary_fingerprint[16]; // = {0x1C,0xCC,0xF6,0xFC,0x31,0xCF,0xD1,0xD6,0x1B,0xBB,0xB1,0xBA,0xF3,0x59,0x06,0x20};

  Account(const Account&);
  Account& operator=(const Account&);
  Account() : id(), visitor(0) {
  }

  virtual ~Account() throw();
  std::string id;
  long visitor;

  _Account__isset __isset;

  void __set_id(const std::string& val);

  void __set_visitor(const long val);

  bool operator == (const Account & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(visitor == rhs.visitor))
      return false;
    return true;
  }
  bool operator != (const Account &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Account & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Account& obj);
};

void swap(Account &a, Account &b);

typedef struct _ServerFigure__isset {
  _ServerFigure__isset() : listAccount(false), totalVisitor(false) {}
  bool listAccount :1;
  bool totalVisitor :1;
} _ServerFigure__isset;

class ServerFigure {
 public:

  static const char* ascii_fingerprint; // = "67B2F07033E097E4BBD01AB566D6BB3E";
  static const uint8_t binary_fingerprint[16]; // = {0x67,0xB2,0xF0,0x70,0x33,0xE0,0x97,0xE4,0xBB,0xD0,0x1A,0xB5,0x66,0xD6,0xBB,0x3E};

  ServerFigure(const ServerFigure&);
  ServerFigure& operator=(const ServerFigure&);
  ServerFigure() : totalVisitor(0) {
  }

  virtual ~ServerFigure() throw();
  std::vector<Account>  listAccount;
  long totalVisitor;

  _ServerFigure__isset __isset;

  void __set_listAccount(const std::vector<Account> & val);

  void __set_totalVisitor(const long val);

  bool operator == (const ServerFigure & rhs) const
  {
    if (!(listAccount == rhs.listAccount))
      return false;
    if (!(totalVisitor == rhs.totalVisitor))
      return false;
    return true;
  }
  bool operator != (const ServerFigure &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServerFigure & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ServerFigure& obj);
};

void swap(ServerFigure &a, ServerFigure &b);

} // namespace

#endif
