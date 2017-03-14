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
  ASSERT_EQ("facility", R.getName());
  ASSERT_EQ("Road",R.getType());
  ASSERT_EQ("Exit",Ex.getType());
  ASSERT_EQ("Entrance",En.getType());
  ASSERT_EQ("Restaurant",Res.getType());
  ASSERT_EQ("Park",P.getType());
}
