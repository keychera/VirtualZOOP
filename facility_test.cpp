#include "facility.h"
#include <gtest/gtest.h>

class FacilityTest : public ::testing::Test {
  protected:
    FacilityTest(){}
};

TEST(FacilityTest, GetTextMethod) {
  AirHabitat A;
  WaterHabitat W;
  LandHabitat L;
  ASSERT_EQ("habitat",L.getName());
  ASSERT_EQ("LandHabitat",L.getType());
  ASSERT_EQ("WaterHabitat",W.getType());
  ASSERT_EQ("AirHabitat",A.getType());
}
