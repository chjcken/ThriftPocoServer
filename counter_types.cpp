/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "counter_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace counterService {


Account::~Account() throw() {
}


void Account::__set_id(const std::string& val) {
  this->id = val;
}

void Account::__set_visitor(const long val) {
  this->visitor = val;
}

const char* Account::ascii_fingerprint = "1CCCF6FC31CFD1D61BBBB1BAF3590620";
const uint8_t Account::binary_fingerprint[16] = {0x1C,0xCC,0xF6,0xFC,0x31,0xCF,0xD1,0xD6,0x1B,0xBB,0xB1,0xBA,0xF3,0x59,0x06,0x20};

uint32_t Account::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->visitor);
          this->__isset.visitor = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Account::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Account");

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("visitor", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->visitor);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Account &a, Account &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.visitor, b.visitor);
  swap(a.__isset, b.__isset);
}

Account::Account(const Account& other0) {
  id = other0.id;
  visitor = other0.visitor;
  __isset = other0.__isset;
}
Account& Account::operator=(const Account& other1) {
  id = other1.id;
  visitor = other1.visitor;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Account& obj) {
  using apache::thrift::to_string;
  out << "Account(";
  out << "id=" << to_string(obj.id);
  out << ", " << "visitor=" << to_string(obj.visitor);
  out << ")";
  return out;
}


ServerFigure::~ServerFigure() throw() {
}


void ServerFigure::__set_listAccount(const std::vector<Account> & val) {
  this->listAccount = val;
}

void ServerFigure::__set_totalVisitor(const long val) {
  this->totalVisitor = val;
}

const char* ServerFigure::ascii_fingerprint = "67B2F07033E097E4BBD01AB566D6BB3E";
const uint8_t ServerFigure::binary_fingerprint[16] = {0x67,0xB2,0xF0,0x70,0x33,0xE0,0x97,0xE4,0xBB,0xD0,0x1A,0xB5,0x66,0xD6,0xBB,0x3E};

uint32_t ServerFigure::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->listAccount.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->listAccount.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += this->listAccount[_i6].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.listAccount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->totalVisitor);
          this->__isset.totalVisitor = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ServerFigure::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ServerFigure");

  xfer += oprot->writeFieldBegin("listAccount", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->listAccount.size()));
    std::vector<Account> ::const_iterator _iter7;
    for (_iter7 = this->listAccount.begin(); _iter7 != this->listAccount.end(); ++_iter7)
    {
      xfer += (*_iter7).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("totalVisitor", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->totalVisitor);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ServerFigure &a, ServerFigure &b) {
  using ::std::swap;
  swap(a.listAccount, b.listAccount);
  swap(a.totalVisitor, b.totalVisitor);
  swap(a.__isset, b.__isset);
}

ServerFigure::ServerFigure(const ServerFigure& other8) {
  listAccount = other8.listAccount;
  totalVisitor = other8.totalVisitor;
  __isset = other8.__isset;
}
ServerFigure& ServerFigure::operator=(const ServerFigure& other9) {
  listAccount = other9.listAccount;
  totalVisitor = other9.totalVisitor;
  __isset = other9.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ServerFigure& obj) {
  using apache::thrift::to_string;
  out << "ServerFigure(";
  out << "listAccount=" << to_string(obj.listAccount);
  out << ", " << "totalVisitor=" << to_string(obj.totalVisitor);
  out << ")";
  return out;
}

} // namespace
