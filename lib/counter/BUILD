load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "counter",
    srcs = ["counter.cc"],
    hdrs = ["counter.h"],
    visibility = ["//bin:__pkg__", "//test/counter:__pkg__"], #VISIBLE BIN AND TEST
)