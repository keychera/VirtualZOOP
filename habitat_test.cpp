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
  ASSERT_EQ(0,strcmp("habitat",L.GetName()));
  ASSERT_EQ(0,strcmp("LandHabitat",L.GetType()));
  ASSERT_EQ(0,strcmp("WaterHabitat",W.GetType()));
  ASSERT_EQ(0,strcmp("AirHabitat",A.GetType()));
}
