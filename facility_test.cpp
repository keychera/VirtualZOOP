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
  ASSERT_EQ("facility", R.GetName());
  ASSERT_EQ("Road",R.GetType());
  ASSERT_EQ("Exit",Ex.GetType());
  ASSERT_EQ("Entrance",En.GetType());
  ASSERT_EQ("Restaurant",Res.GetType());
  ASSERT_EQ("Park",P.GetType());
}
