/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Hello_H
#define Hello_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "hello_types.h"

namespace hello {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class HelloIf {
 public:
  virtual ~HelloIf() {}
  virtual void echo(const std::string& msg) = 0;
  virtual int32_t add(const int32_t a, const int32_t b) = 0;
  virtual int32_t mul(const int32_t a, const int32_t b) = 0;
  virtual void mulOfSum(MulOfSumOut& _return, const MulOfSumIn& input) = 0;
};

class HelloIfFactory {
 public:
  typedef HelloIf Handler;

  virtual ~HelloIfFactory() {}

  virtual HelloIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(HelloIf* /* handler */) = 0;
};

class HelloIfSingletonFactory : virtual public HelloIfFactory {
 public:
  HelloIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<HelloIf>& iface) : iface_(iface) {}
  virtual ~HelloIfSingletonFactory() {}

  virtual HelloIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(HelloIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<HelloIf> iface_;
};

class HelloNull : virtual public HelloIf {
 public:
  virtual ~HelloNull() {}
  void echo(const std::string& /* msg */) {
    return;
  }
  int32_t add(const int32_t /* a */, const int32_t /* b */) {
    int32_t _return = 0;
    return _return;
  }
  int32_t mul(const int32_t /* a */, const int32_t /* b */) {
    int32_t _return = 0;
    return _return;
  }
  void mulOfSum(MulOfSumOut& /* _return */, const MulOfSumIn& /* input */) {
    return;
  }
};

typedef struct _Hello_echo_args__isset {
  _Hello_echo_args__isset() : msg(false) {}
  bool msg :1;
} _Hello_echo_args__isset;

class Hello_echo_args {
 public:

  Hello_echo_args(const Hello_echo_args&);
  Hello_echo_args& operator=(const Hello_echo_args&);
  Hello_echo_args() : msg() {
  }

  virtual ~Hello_echo_args() throw();
  std::string msg;

  _Hello_echo_args__isset __isset;

  void __set_msg(const std::string& val);

  bool operator == (const Hello_echo_args & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const Hello_echo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_echo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Hello_echo_pargs {
 public:


  virtual ~Hello_echo_pargs() throw();
  const std::string* msg;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Hello_echo_result {
 public:

  Hello_echo_result(const Hello_echo_result&);
  Hello_echo_result& operator=(const Hello_echo_result&);
  Hello_echo_result() {
  }

  virtual ~Hello_echo_result() throw();

  bool operator == (const Hello_echo_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Hello_echo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_echo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Hello_echo_presult {
 public:


  virtual ~Hello_echo_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Hello_add_args__isset {
  _Hello_add_args__isset() : a(false), b(false) {}
  bool a :1;
  bool b :1;
} _Hello_add_args__isset;

class Hello_add_args {
 public:

  Hello_add_args(const Hello_add_args&);
  Hello_add_args& operator=(const Hello_add_args&);
  Hello_add_args() : a(0), b(0) {
  }

  virtual ~Hello_add_args() throw();
  int32_t a;
  int32_t b;

  _Hello_add_args__isset __isset;

  void __set_a(const int32_t val);

  void __set_b(const int32_t val);

  bool operator == (const Hello_add_args & rhs) const
  {
    if (!(a == rhs.a))
      return false;
    if (!(b == rhs.b))
      return false;
    return true;
  }
  bool operator != (const Hello_add_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_add_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Hello_add_pargs {
 public:


  virtual ~Hello_add_pargs() throw();
  const int32_t* a;
  const int32_t* b;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Hello_add_result__isset {
  _Hello_add_result__isset() : success(false) {}
  bool success :1;
} _Hello_add_result__isset;

class Hello_add_result {
 public:

  Hello_add_result(const Hello_add_result&);
  Hello_add_result& operator=(const Hello_add_result&);
  Hello_add_result() : success(0) {
  }

  virtual ~Hello_add_result() throw();
  int32_t success;

  _Hello_add_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Hello_add_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Hello_add_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_add_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Hello_add_presult__isset {
  _Hello_add_presult__isset() : success(false) {}
  bool success :1;
} _Hello_add_presult__isset;

class Hello_add_presult {
 public:


  virtual ~Hello_add_presult() throw();
  int32_t* success;

  _Hello_add_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Hello_mul_args__isset {
  _Hello_mul_args__isset() : a(false), b(false) {}
  bool a :1;
  bool b :1;
} _Hello_mul_args__isset;

class Hello_mul_args {
 public:

  Hello_mul_args(const Hello_mul_args&);
  Hello_mul_args& operator=(const Hello_mul_args&);
  Hello_mul_args() : a(0), b(0) {
  }

  virtual ~Hello_mul_args() throw();
  int32_t a;
  int32_t b;

  _Hello_mul_args__isset __isset;

  void __set_a(const int32_t val);

  void __set_b(const int32_t val);

  bool operator == (const Hello_mul_args & rhs) const
  {
    if (!(a == rhs.a))
      return false;
    if (!(b == rhs.b))
      return false;
    return true;
  }
  bool operator != (const Hello_mul_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_mul_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Hello_mul_pargs {
 public:


  virtual ~Hello_mul_pargs() throw();
  const int32_t* a;
  const int32_t* b;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Hello_mul_result__isset {
  _Hello_mul_result__isset() : success(false) {}
  bool success :1;
} _Hello_mul_result__isset;

class Hello_mul_result {
 public:

  Hello_mul_result(const Hello_mul_result&);
  Hello_mul_result& operator=(const Hello_mul_result&);
  Hello_mul_result() : success(0) {
  }

  virtual ~Hello_mul_result() throw();
  int32_t success;

  _Hello_mul_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Hello_mul_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Hello_mul_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_mul_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Hello_mul_presult__isset {
  _Hello_mul_presult__isset() : success(false) {}
  bool success :1;
} _Hello_mul_presult__isset;

class Hello_mul_presult {
 public:


  virtual ~Hello_mul_presult() throw();
  int32_t* success;

  _Hello_mul_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Hello_mulOfSum_args__isset {
  _Hello_mulOfSum_args__isset() : input(false) {}
  bool input :1;
} _Hello_mulOfSum_args__isset;

class Hello_mulOfSum_args {
 public:

  Hello_mulOfSum_args(const Hello_mulOfSum_args&);
  Hello_mulOfSum_args& operator=(const Hello_mulOfSum_args&);
  Hello_mulOfSum_args() {
  }

  virtual ~Hello_mulOfSum_args() throw();
  MulOfSumIn input;

  _Hello_mulOfSum_args__isset __isset;

  void __set_input(const MulOfSumIn& val);

  bool operator == (const Hello_mulOfSum_args & rhs) const
  {
    if (!(input == rhs.input))
      return false;
    return true;
  }
  bool operator != (const Hello_mulOfSum_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_mulOfSum_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Hello_mulOfSum_pargs {
 public:


  virtual ~Hello_mulOfSum_pargs() throw();
  const MulOfSumIn* input;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Hello_mulOfSum_result__isset {
  _Hello_mulOfSum_result__isset() : success(false) {}
  bool success :1;
} _Hello_mulOfSum_result__isset;

class Hello_mulOfSum_result {
 public:

  Hello_mulOfSum_result(const Hello_mulOfSum_result&);
  Hello_mulOfSum_result& operator=(const Hello_mulOfSum_result&);
  Hello_mulOfSum_result() {
  }

  virtual ~Hello_mulOfSum_result() throw();
  MulOfSumOut success;

  _Hello_mulOfSum_result__isset __isset;

  void __set_success(const MulOfSumOut& val);

  bool operator == (const Hello_mulOfSum_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Hello_mulOfSum_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Hello_mulOfSum_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Hello_mulOfSum_presult__isset {
  _Hello_mulOfSum_presult__isset() : success(false) {}
  bool success :1;
} _Hello_mulOfSum_presult__isset;

class Hello_mulOfSum_presult {
 public:


  virtual ~Hello_mulOfSum_presult() throw();
  MulOfSumOut* success;

  _Hello_mulOfSum_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class HelloClient : virtual public HelloIf {
 public:
  HelloClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HelloClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void echo(const std::string& msg);
  void send_echo(const std::string& msg);
  void recv_echo();
  int32_t add(const int32_t a, const int32_t b);
  void send_add(const int32_t a, const int32_t b);
  int32_t recv_add();
  int32_t mul(const int32_t a, const int32_t b);
  void send_mul(const int32_t a, const int32_t b);
  int32_t recv_mul();
  void mulOfSum(MulOfSumOut& _return, const MulOfSumIn& input);
  void send_mulOfSum(const MulOfSumIn& input);
  void recv_mulOfSum(MulOfSumOut& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class HelloProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<HelloIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (HelloProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_echo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_add(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_mul(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_mulOfSum(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  HelloProcessor(::apache::thrift::stdcxx::shared_ptr<HelloIf> iface) :
    iface_(iface) {
    processMap_["echo"] = &HelloProcessor::process_echo;
    processMap_["add"] = &HelloProcessor::process_add;
    processMap_["mul"] = &HelloProcessor::process_mul;
    processMap_["mulOfSum"] = &HelloProcessor::process_mulOfSum;
  }

  virtual ~HelloProcessor() {}
};

class HelloProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  HelloProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< HelloIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< HelloIfFactory > handlerFactory_;
};

class HelloMultiface : virtual public HelloIf {
 public:
  HelloMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<HelloIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~HelloMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<HelloIf> > ifaces_;
  HelloMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<HelloIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void echo(const std::string& msg) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->echo(msg);
    }
    ifaces_[i]->echo(msg);
  }

  int32_t add(const int32_t a, const int32_t b) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add(a, b);
    }
    return ifaces_[i]->add(a, b);
  }

  int32_t mul(const int32_t a, const int32_t b) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->mul(a, b);
    }
    return ifaces_[i]->mul(a, b);
  }

  void mulOfSum(MulOfSumOut& _return, const MulOfSumIn& input) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->mulOfSum(_return, input);
    }
    ifaces_[i]->mulOfSum(_return, input);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class HelloConcurrentClient : virtual public HelloIf {
 public:
  HelloConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HelloConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void echo(const std::string& msg);
  int32_t send_echo(const std::string& msg);
  void recv_echo(const int32_t seqid);
  int32_t add(const int32_t a, const int32_t b);
  int32_t send_add(const int32_t a, const int32_t b);
  int32_t recv_add(const int32_t seqid);
  int32_t mul(const int32_t a, const int32_t b);
  int32_t send_mul(const int32_t a, const int32_t b);
  int32_t recv_mul(const int32_t seqid);
  void mulOfSum(MulOfSumOut& _return, const MulOfSumIn& input);
  int32_t send_mulOfSum(const MulOfSumIn& input);
  void recv_mulOfSum(MulOfSumOut& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
