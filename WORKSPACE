load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
git_repository(
    name = "gtest",
    remote = "https://github.com/abseil/googletest",
    commit = "695cf7c96249de50360a7d2951dc88eb3aea0695",
)

git_repository(
    name = "absl",
    remote = "https://github.com/abseil/abseil-cpp",
    commit = "f197d7c72a54064cfde5a2058f1513a4a0ee36fb",
)


# External dependency: Eigen; has no Bazel build.
new_http_archive(
    name = "com_github_eigen_eigen",
    build_file = "eigen.BUILD",
    sha256 = "dd254beb0bafc695d0f62ae1a222ff85b52dbaa3a16f76e781dce22d0d20a4a6",
    strip_prefix = "eigen-eigen-5a0156e40feb",
    urls = [
        "http://bitbucket.org/eigen/eigen/get/3.3.4.tar.bz2",
    ],
)

http_archive(
    name = "com_google_protobuf",
    sha256 = "cef7f1b5a7c5fba672bec2a319246e8feba471f04dcebfe362d55930ee7c1c30",
    strip_prefix = "protobuf-3.5.0",
    urls = ["https://github.com/google/protobuf/archive/v3.5.0.zip"],
)

