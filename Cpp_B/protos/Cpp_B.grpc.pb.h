// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Cpp_B.proto
#ifndef GRPC_protos_2fCpp_5fB_2eproto__INCLUDED
#define GRPC_protos_2fCpp_5fB_2eproto__INCLUDED

#include "protos/Cpp_B.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace protos {

class Cpp_B final {
 public:
  static constexpr char const* service_full_name() {
    return "protos.Cpp_B";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> AsyncCpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(AsyncCpp_B_1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> PrepareAsyncCpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(PrepareAsyncCpp_B_1Raw(context, request, cq));
    }
    virtual ::grpc::Status Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> AsyncCpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(AsyncCpp_B_2Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> PrepareAsyncCpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(PrepareAsyncCpp_B_2Raw(context, request, cq));
    }
    virtual ::grpc::Status Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> AsyncCpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(AsyncCpp_B_3Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> PrepareAsyncCpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(PrepareAsyncCpp_B_3Raw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* AsyncCpp_B_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* PrepareAsyncCpp_B_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* AsyncCpp_B_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* PrepareAsyncCpp_B_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* AsyncCpp_B_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* PrepareAsyncCpp_B_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> AsyncCpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(AsyncCpp_B_1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> PrepareAsyncCpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(PrepareAsyncCpp_B_1Raw(context, request, cq));
    }
    ::grpc::Status Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> AsyncCpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(AsyncCpp_B_2Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> PrepareAsyncCpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(PrepareAsyncCpp_B_2Raw(context, request, cq));
    }
    ::grpc::Status Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> AsyncCpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(AsyncCpp_B_3Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> PrepareAsyncCpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(PrepareAsyncCpp_B_3Raw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) override;
      void Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) override;
      void Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) override;
      void Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* AsyncCpp_B_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* PrepareAsyncCpp_B_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* AsyncCpp_B_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* PrepareAsyncCpp_B_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* AsyncCpp_B_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* PrepareAsyncCpp_B_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Cpp_B_1_;
    const ::grpc::internal::RpcMethod rpcmethod_Cpp_B_2_;
    const ::grpc::internal::RpcMethod rpcmethod_Cpp_B_3_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Cpp_B_1(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response);
    virtual ::grpc::Status Cpp_B_2(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response);
    virtual ::grpc::Status Cpp_B_3(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Cpp_B_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Cpp_B_1() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Cpp_B_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCpp_B_1(::grpc::ServerContext* context, ::protos::CommonMessage* request, ::grpc::ServerAsyncResponseWriter< ::protos::CommonMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Cpp_B_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Cpp_B_2() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Cpp_B_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCpp_B_2(::grpc::ServerContext* context, ::protos::CommonMessage* request, ::grpc::ServerAsyncResponseWriter< ::protos::CommonMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Cpp_B_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Cpp_B_3() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Cpp_B_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCpp_B_3(::grpc::ServerContext* context, ::protos::CommonMessage* request, ::grpc::ServerAsyncResponseWriter< ::protos::CommonMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Cpp_B_1<WithAsyncMethod_Cpp_B_2<WithAsyncMethod_Cpp_B_3<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Cpp_B_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Cpp_B_1() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) { return this->Cpp_B_1(context, request, response); }));}
    void SetMessageAllocatorFor_Cpp_B_1(
        ::grpc::MessageAllocator< ::protos::CommonMessage, ::protos::CommonMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Cpp_B_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cpp_B_1(
      ::grpc::CallbackServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Cpp_B_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Cpp_B_2() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) { return this->Cpp_B_2(context, request, response); }));}
    void SetMessageAllocatorFor_Cpp_B_2(
        ::grpc::MessageAllocator< ::protos::CommonMessage, ::protos::CommonMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Cpp_B_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cpp_B_2(
      ::grpc::CallbackServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Cpp_B_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Cpp_B_3() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) { return this->Cpp_B_3(context, request, response); }));}
    void SetMessageAllocatorFor_Cpp_B_3(
        ::grpc::MessageAllocator< ::protos::CommonMessage, ::protos::CommonMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Cpp_B_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cpp_B_3(
      ::grpc::CallbackServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Cpp_B_1<WithCallbackMethod_Cpp_B_2<WithCallbackMethod_Cpp_B_3<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Cpp_B_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Cpp_B_1() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Cpp_B_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Cpp_B_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Cpp_B_2() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Cpp_B_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Cpp_B_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Cpp_B_3() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Cpp_B_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Cpp_B_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Cpp_B_1() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Cpp_B_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCpp_B_1(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Cpp_B_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Cpp_B_2() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Cpp_B_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCpp_B_2(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Cpp_B_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Cpp_B_3() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Cpp_B_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCpp_B_3(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Cpp_B_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Cpp_B_1() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Cpp_B_1(context, request, response); }));
    }
    ~WithRawCallbackMethod_Cpp_B_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cpp_B_1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Cpp_B_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Cpp_B_2() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Cpp_B_2(context, request, response); }));
    }
    ~WithRawCallbackMethod_Cpp_B_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cpp_B_2(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Cpp_B_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Cpp_B_3() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Cpp_B_3(context, request, response); }));
    }
    ~WithRawCallbackMethod_Cpp_B_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cpp_B_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cpp_B_3(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Cpp_B_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Cpp_B_1() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protos::CommonMessage, ::protos::CommonMessage>* streamer) {
                       return this->StreamedCpp_B_1(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Cpp_B_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Cpp_B_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCpp_B_1(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::CommonMessage,::protos::CommonMessage>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Cpp_B_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Cpp_B_2() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protos::CommonMessage, ::protos::CommonMessage>* streamer) {
                       return this->StreamedCpp_B_2(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Cpp_B_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Cpp_B_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCpp_B_2(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::CommonMessage,::protos::CommonMessage>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Cpp_B_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Cpp_B_3() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protos::CommonMessage, ::protos::CommonMessage>* streamer) {
                       return this->StreamedCpp_B_3(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Cpp_B_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Cpp_B_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCpp_B_3(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::CommonMessage,::protos::CommonMessage>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Cpp_B_1<WithStreamedUnaryMethod_Cpp_B_2<WithStreamedUnaryMethod_Cpp_B_3<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Cpp_B_1<WithStreamedUnaryMethod_Cpp_B_2<WithStreamedUnaryMethod_Cpp_B_3<Service > > > StreamedService;
};

}  // namespace protos


#endif  // GRPC_protos_2fCpp_5fB_2eproto__INCLUDED
