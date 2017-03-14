#include "zoo.h"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;

class ZooTest : public ::testing::Test {
  protected:
    ZooTest(){}
};

TEST(ZooTest, Test1) {
  string filename="map.txt";
  Zoo Z;
  Z.ReadZoo(filename.c_str());
  ASSERT_EQ(21,Z.GetWidth());
  ASSERT_EQ(21,Z.GetLength());
cout<<"width: "<<Z.GetWidth()<<endl;
cout<<"length: "<<Z.GetLength()<<endl;
      for(int i=0;i<Z.GetWidth();i++)
      {
          for(int j=0;j<Z.GetLength();j++)
          {
		//cout<<i<<j<<(i*Z.GetLength()+j);
		//cout<<Z.GetCells()[i*Z.GetLength()+j]->GetX()<<Z.GetCells()[i*Z.GetLength()+j]->GetY()<<endl;
              ASSERT_EQ((i),Z.GetCells()[i*Z.GetLength()+j]->GetX());
              ASSERT_EQ((j),Z.GetCells()[i*Z.GetLength()+j]->GetY());
          }
          //cout<<endl;
      }
      Z.MakeCage();
      ASSERT_EQ(17,Z.GetNCages());
}
