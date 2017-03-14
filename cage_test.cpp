#include "cage.h"
#include <gtest/gtest.h>

class CageTest : public ::testing::Test {
  protected:
    CageTest(){}
};

TEST(CageTest, GetTextMethod) {
  AirHabitat A;
  WaterHabitat W;
  LandHabitat L;
  ASSERT_EQ((char*)"habitat",L.GetName());
  ASSERT_EQ((char*)"LandHabitat",L.GetType());
  ASSERT_EQ((char*)"WaterHabitat",W.GetType());
  ASSERT_EQ((char*)"AirHabitat",A.GetType());
}