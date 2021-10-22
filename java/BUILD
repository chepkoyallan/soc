load("@rules_java//java:defs.bzl", "java_binary", "java_library")

package(default_visibility = ["//visibility:public"])

java_library(
    name = "zoracloud",
    srcs = glob(["src/main/java/com/zoracloud/app/*.java"]),
    # deps = ["@maven//:com_google_guava_guava"],
)

java_binary(
    name = "app",
    main_class = "com.zoracloud.app.App",
    runtime_deps = [":zoracloud"]
)