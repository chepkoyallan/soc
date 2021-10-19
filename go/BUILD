load("@io_bazel_rules_go//go:def.bzl", "go_binary", "go_library")
load("@bazel_gazelle//:def.bzl", "gazelle")

# gazelle:prefix github.com/chepkoyallan/soc/tree/develop/go
gazelle(name = "soc")

go_library(
    name = "go_lib",
    srcs = ["firstapp.go"],
    importpath = "github.com/chepkoyallan/soc/tree/develop/go",
    visibility = ["//visibility:private"],
)

go_binary(
    name = "go",
    embed = [":go_lib"],
    visibility = ["//visibility:public"],
)
