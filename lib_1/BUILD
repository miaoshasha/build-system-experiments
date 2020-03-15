
cc_library(
    name = "lib_1",
    srcs = ["func1.cpp"],
    hdrs = ["func1.hpp"],
    copts = ["-Ilib_1"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "use_lib1_binary",
    srcs = ["use_lib1_binary.cpp"],
)
