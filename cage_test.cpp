#include "cage.h"
#include <gtest/gtest.h>

class CageTest : public ::testing::Test {
  protected:
    CageTest(){}
};

TEST(CageTest, Cage) {
  Cage C;
  ASSERT_EQ(0,C.GetNAnimal());
}

TEST(CageTest, GetSize) {
  Cage * C=new Cage((char*)"LandHabitat",10);
  ASSERT_EQ(10,C->GetSize());
}

TEST(CageTest, GetArea) {
  Cage * C=new Cage((char*)"LandHabitat",1);
  Location L(1,2);
  C->GetArea()[0]=L;
  ASSERT_EQ(1,C->GetArea()[0].GetX());
  ASSERT_EQ(2,C->GetArea()[0].GetY());
}

TEST(CageTest, IsInCage) {
  Cage * C=new Cage((char*)"LandHabitat",1);
  Location L(1,2);
  Location L1(3,4);
  C->GetArea()[0]=L;
  ASSERT_EQ(false,C->IsInCage(L1));
  ASSERT_EQ(true,C->IsInCage(L));
}

TEST(CageTest, GetHabitat) {
  Cage * C=new Cage((char*)"LandHabitat",1);
  ASSERT_EQ((char*)"LandHabitat",C->GetHabitat());
}
TEST(CageTest, Move){
  Cage C;
  Animal* Cato=new Cat;
  Cato->SetX(0);
  Cato->SetY(0);
  Location L=C.Move(Cato,1);
  ASSERT_EQ(1,L.GetX());
  ASSERT_EQ(0,L.GetY());
}
TEST(CageTest, Animalmeow)
{
  Cage* C= new Cage((char*)"coba",3);
  Location L(1,2);
  Location L1(1,3);
  Location L2(1,4);
  C->GetArea()[0]=L;
  C->GetArea()[1]=L1;
  C->GetArea()[2]=L2;
  Animal* Cato=new Cat;
  C->AddAnimal(Cato);
  ASSERT_EQ(1,C->GetNAnimal());
  ASSERT_EQ(true,C->IsThereAnimal(L));
}
int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
