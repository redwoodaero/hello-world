cc_binary(
    name = "hello_world",
    srcs = [
        "hello_world.cc",
    ],
  )

cc_test (
  name = "hello_test",
  srcs = [
    "hello_test.cc",
  ],
  deps = [
    "@gtest//:gtest",
    "@gtest//:gtest_main", # Only if hello_test.cc has no main()
    "@absl//absl/strings:strings",
    "@com_github_eigen_eigen//:eigen",
    ":state_cc_proto",
  ],
)

cc_proto_library(
    name = "state_cc_proto",
    deps = [":state_proto"],
)
proto_library(
    name = "state_proto",
    srcs = ["state.proto"],
)
