#include "zoo.h"
#include "tour.h"
#include <iostream>
using namespace std;
int main() {
    string filename="map.txt";
	Zoo Z;
    cout<<"done"<<endl;
    Z.ReadZoo(filename.c_str());
    cout<<"done"<<endl;
    cout<<Z.GetWidth()<<endl;
    cout<<Z.GetLength()<<endl;
    for(int i=0;i<Z.GetWidth();i++)
    {
        for(int j=0;j<Z.GetLength();j++)
        {
            cout<<Z.GetCells()[i*Z.GetLength()+j]->GetX();
            cout<<Z.GetCells()[i*Z.GetLength()+j]->GetY();
            Z.GetCells()[i*Z.GetLength()+j]->Render();
        }
        cout<<endl;
    }
    Z.MakeCage();
    cout<<Z.GetNCages()<<endl;/*
    for(int i=0;i<Z.GetNCages();i++)
    {
        cout<<"Cage "<<i+1<<endl;
        cout<<"size"<<Z.GetCages()[i]->GetSize()<<endl;
        for(int j=0;j<Z.GetCages()[i]->GetSize();j++)
        {
            cout<<Z.GetCages()[i]->GetArea()[j].GetX()<<' '<<Z.GetCages()[i]->GetArea()[j].GetY()<<endl;
        }
    }*//*
    Cat C;
    Z.getCages()[1]->AddAnimal(&C);
    cout<<Z.getCages()[1]->getAnimals()[Z.getCages()[1]->getNAnimal()]->GetX()<<endl;
    cout<<Z.getCages()[1]->getAnimals()[Z.getCages()[1]->getNAnimal()]->GetY()<<endl;*/
    /*
  cout << "Tour Begins" << endl;
  
  Tour t(Z);
  t.PrintRoute();
  
  cout << "Tour Ends" << endl;
  */
  
    cout<<"done" << endl;
return 0;
}
