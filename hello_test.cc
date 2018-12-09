#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "absl/strings/str_cat.h"
#include "state.pb.h"
#include "Eigen/Core"

namespace {

using testing::Eq;

TEST(HelloTest, BuildsAndRuns)
{
  State state;
  state.set_position(1.0);
  state.set_velocity(2.0);
  state.set_acceleration(3.0);
  Eigen::Vector2d vec;
  vec << 2.0, 1.0;
  EXPECT_THAT(vec[0], Eq(2.0 * vec[1]));
  const std::string test_string = absl::StrCat("Hello ", 1);
  EXPECT_THAT(test_string, Eq("Hello 1"));
  const std::string proto_string = R"(position: 1
velocity: 2
acceleration: 3
)";
  EXPECT_THAT(state.DebugString(), Eq(proto_string));
}

}  // namespace

