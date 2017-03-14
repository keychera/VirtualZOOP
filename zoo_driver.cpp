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
            Z.getCells()[i*Z.getlength()+j]->Render();
        }
        cout<<endl;
    }
    Z.MakeCage();
    cout<<Z.getNCages()<<endl;
    for(int i=0;i<Z.getNCages();i++)
    {
        cout<<"Cage "<<i+1<<endl;
        for(int j=0;j<Z.getCages()[i]->getsize();j++)
        {
            cout<<Z.getCages()[i]->getArea()[j].getX()<<' '<<Z.getCages()[i]->getArea()[j].getY()<<endl;
        }
    }/*
    Cat C;
    Z.getCages()[1]->AddAnimal(&C);
    cout<<Z.getCages()[1]->getAnimals()[Z.getCages()[1]->getNAnimal()]->getX()<<endl;
    cout<<Z.getCages()[1]->getAnimals()[Z.getCages()[1]->getNAnimal()]->getY()<<endl;*/
    cout<<"done";
return 0;
}