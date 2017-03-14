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
  ASSERT_EQ((char*)"facility", R.GetName());
  ASSERT_EQ((char*)"Road",R.GetType());
  ASSERT_EQ((char*)"Exit",Ex.GetType());
  ASSERT_EQ((char*)"Entrance",En.GetType());
  ASSERT_EQ((char*)"Restaurant",Res.GetType());
  ASSERT_EQ((char*)"Park",P.GetType());
}
