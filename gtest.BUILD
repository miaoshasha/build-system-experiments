cc_library(
      name = "gtest",
      srcs = (
          ["src/*.cc"],
          exclude = ["src/gtest-all.cc"]
      ),
      hdrs = glob([
          "include/**/*.h",
          "src/*.h"
      ]),
      copts = ["-Iexternal/gtest/include"],
      linkopts = ["-pthread"],
      visibility = ["//visibility:public"],
  )

