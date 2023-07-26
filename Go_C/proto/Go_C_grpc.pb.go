// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.2.0
// - protoc             v3.21.8
// source: protos/Go_C.proto

package proto

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.32.0 or later.
const _ = grpc.SupportPackageIsVersion7

// Go_CClient is the client API for Go_C service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type Go_CClient interface {
	Go_C_1(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
	Go_C_2(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
	Go_C_3(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
}

type go_CClient struct {
	cc grpc.ClientConnInterface
}

func NewGo_CClient(cc grpc.ClientConnInterface) Go_CClient {
	return &go_CClient{cc}
}

func (c *go_CClient) Go_C_1(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Go_C/Go_C_1", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *go_CClient) Go_C_2(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Go_C/Go_C_2", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *go_CClient) Go_C_3(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Go_C/Go_C_3", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// Go_CServer is the server API for Go_C service.
// All implementations must embed UnimplementedGo_CServer
// for forward compatibility
type Go_CServer interface {
	Go_C_1(context.Context, *CommonMessage) (*CommonMessage, error)
	Go_C_2(context.Context, *CommonMessage) (*CommonMessage, error)
	Go_C_3(context.Context, *CommonMessage) (*CommonMessage, error)
	mustEmbedUnimplementedGo_CServer()
}

// UnimplementedGo_CServer must be embedded to have forward compatible implementations.
type UnimplementedGo_CServer struct {
}

func (UnimplementedGo_CServer) Go_C_1(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Go_C_1 not implemented")
}
func (UnimplementedGo_CServer) Go_C_2(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Go_C_2 not implemented")
}
func (UnimplementedGo_CServer) Go_C_3(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Go_C_3 not implemented")
}
func (UnimplementedGo_CServer) mustEmbedUnimplementedGo_CServer() {}

// UnsafeGo_CServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to Go_CServer will
// result in compilation errors.
type UnsafeGo_CServer interface {
	mustEmbedUnimplementedGo_CServer()
}

func RegisterGo_CServer(s grpc.ServiceRegistrar, srv Go_CServer) {
	s.RegisterService(&Go_C_ServiceDesc, srv)
}

func _Go_C_Go_C_1_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Go_CServer).Go_C_1(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Go_C/Go_C_1",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Go_CServer).Go_C_1(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

func _Go_C_Go_C_2_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Go_CServer).Go_C_2(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Go_C/Go_C_2",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Go_CServer).Go_C_2(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

func _Go_C_Go_C_3_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Go_CServer).Go_C_3(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Go_C/Go_C_3",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Go_CServer).Go_C_3(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

// Go_C_ServiceDesc is the grpc.ServiceDesc for Go_C service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var Go_C_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "protos.Go_C",
	HandlerType: (*Go_CServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Go_C_1",
			Handler:    _Go_C_Go_C_1_Handler,
		},
		{
			MethodName: "Go_C_2",
			Handler:    _Go_C_Go_C_2_Handler,
		},
		{
			MethodName: "Go_C_3",
			Handler:    _Go_C_Go_C_3_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "protos/Go_C.proto",
}