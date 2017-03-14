#include "facility.h"
#include <gtest/gtest.h>

class FacilityTest : public ::testing::Test {
  protected:
    FacilityTest(){}
};

TEST(FacilityTest, GetTextMethod) {
  Road R;
  Exit Ex;
  Entrance En;
  Restaurant Res;
  Park P;
  ASSERT_EQ(0,strcmp("facility", R.GetName()));
  ASSERT_EQ(0,strcmp("Road",R.GetType()));
  ASSERT_EQ(0,strcmp("Exit",Ex.GetType()));
  ASSERT_EQ(0,strcmp("Entrance",En.GetType()));
  ASSERT_EQ(0,strcmp("Restaurant",Res.GetType()));
  ASSERT_EQ(0,strcmp("Park",P.GetType()));
}
