#include "zoo.h"
#include <iostream>
using namespace std;
int main() {
    string filename="map.txt";
	Zoo Z;
    cout<<"done"<<endl;
    Z.ReadZoo(filename.c_str());
    cout<<"done"<<endl;
    cout<<Z.getwidth()<<endl;
    cout<<Z.getlength()<<endl;
    for(int i=0;i<Z.getwidth();i++)
    {
        for(int j=0;j<Z.getlength();j++)
        {
            cout<<Z.getCells()[i*Z.getlength()+j]->GetX();
            cout<<Z.getCells()[i*Z.getlength()+j]->GetY();
            Z.getCells()[i*Z.getlength()+j]->Render();
        }
        cout<<endl;
    }
    Z.MakeCage();
    cout<<Z.getNCages()<<endl;/*
    for(int i=0;i<Z.getNCages();i++)
    {
        cout<<"Cage "<<i+1<<endl;
        cout<<"size"<<Z.getCages()[i]->getSize()<<endl;
        for(int j=0;j<Z.getCages()[i]->getSize();j++)
        {
            cout<<Z.getCages()[i]->getArea()[j].GetX()<<' '<<Z.getCages()[i]->getArea()[j].GetY()<<endl;
        }
    }*//*
    Cat C;
    Z.getCages()[1]->AddAnimal(&C);
    cout<<Z.getCages()[1]->getAnimals()[Z.getCages()[1]->getNAnimal()]->GetX()<<endl;
    cout<<Z.getCages()[1]->getAnimals()[Z.getCages()[1]->getNAnimal()]->GetY()<<endl;*/
    cout<<"done";
return 0;
}
