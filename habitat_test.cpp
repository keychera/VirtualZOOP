#include "habitat.h"
#include <gtest/gtest.h>

class HabitatTest : public ::testing::Test {
  protected:
    HabitatTest(){}
};

TEST(HabitatTest, GetTextMethod) {
  AirHabitat A;
  WaterHabitat W;
  LandHabitat L;
  ASSERT_EQ("habitat",L.getName());
  ASSERT_EQ("LandHabitat",L.getType());
  ASSERT_EQ("WaterHabitat",W.getType());
  ASSERT_EQ("AirHabitat",A.getType());
}
