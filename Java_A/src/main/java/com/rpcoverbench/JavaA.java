// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Java_A.proto

package com.rpcoverbench;

public final class JavaA {
  private JavaA() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\023protos/Java_A.proto\022\006protos\032\024protos/me" +
      "ssage.proto2\274\001\n\006Java_A\022:\n\010Java_A_1\022\025.pro" +
      "tos.CommonMessage\032\025.protos.CommonMessage" +
      "\"\000\022:\n\010Java_A_2\022\025.protos.CommonMessage\032\025." +
      "protos.CommonMessage\"\000\022:\n\010Java_A_3\022\025.pro" +
      "tos.CommonMessage\032\025.protos.CommonMessage" +
      "\"\000B\033\n\020com.rpcoverbenchZ\007./protob\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          com.rpcoverbench.Message.getDescriptor(),
        });
    com.rpcoverbench.Message.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
