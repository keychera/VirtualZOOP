#include "cage.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;
Cage::Cage():size(0),habitat("")
{
    NAnimal=0;
    area=new Location[0];
    Animals=new Animal*[0];
}
Cage::Cage(char* hab, int size):size(size),habitat(hab)
{
    Animals=new Animal*[size*2/3];
    NAnimal=0;
    area=new Location[size];
}
Cage::~Cage()
{
    delete[] Animals;
    delete[] area;
}
Cage::Cage(const Cage& C):size(C.size),habitat(C.habitat)
{
    for(int i=0;i<size;i++)
    {
        area[i]=C.area[i];
    }
    NAnimal=C.NAnimal;
    for(int i=0;i<NAnimal;i++)
    {
        Animals[i]=C.Animals[i];
    }
}
Cage& Cage::operator=(const Cage& C)
{
    delete[] Animals;
    delete[] area;
    NAnimal=C.NAnimal;
    Animals=new Animal*[NAnimal];
    area=new Location[size];
    for(int i=0;i<size;i++)
    {
        area[i]=C.area[i];
    }
    NAnimal=C.NAnimal;
    for(int i=0;i<NAnimal;i++)
    {
        Animals[i]=C.Animals[i];
    }
}

int Cage::getSize()
{
    return size;
}

Location* Cage::getArea()
{
    return area;
}
void Cage::MovementManager()
{
    srand(time(NULL));
    for(int i=0;i<NAnimal;i++)
    {
        int random=rand()%4;
        bool moved=false;
        int count=0;
        while((!moved)&&(count<=4))
        {
            Location m=move(Animals[i],random);
            if ((isInCage(m)&&(!isThereAnimal(m))))
            {
                Animals[i]->SetX(m.GetX());
                Animals[i]->SetY(m.GetY());
                moved=true;
            }
            count++;
            random=(random+1)%4;
        }
    }
}
Location Cage::move(Animal* A,int i)
{
    Location L1(A->GetX(),A->GetY());
    if(i==0)
    {
        L1.SetY(L1.GetY()-1);
    }else if(i==1)
    {
        L1.SetX(L1.GetX()+1);
    }else if (i==2)
    {
        L1.SetY(L1.GetY()+1);
    }else if(i==3)
    {
        L1.SetX(L1.GetX()-1);
    }
    return L1;
}
bool Cage::isThereAnimal(Location& L)
{
    bool found=false;
    int i=0;
    while((!found)&&(i<NAnimal))
    {
        if((Animals[i]->GetX()==L.GetX())&&(Animals[i]->GetY()==L.GetY()))
        {
            found=true;
        }
        i++;
    }   
    return found; 
}
bool Cage::isInCage(Location& L)
{
    bool found=false;
    int i=0;
    while((!found)&&(i<size))
    {
        if((area[i].GetX()==L.GetX())&&(area[i].GetY()==L.GetY()))
        {
            found=true;
        }
        i++;
    }    
    return found;
}
void Cage::AddAnimal(Animal* A)
{
    if(NAnimal<(size*2/3))
    {
        Animals[NAnimal]=A;
        int i=0;
        bool found=false;
        while((i<size)&&(!found))
        {
            if(!isThereAnimal(area[i]))
            {
                Animals[NAnimal]->SetX(area[i].GetX());
                Animals[NAnimal]->SetY(area[i].GetY());
                found=true;
            }
            i++;
        }
        NAnimal++;
    }else
    {
        cout<<"full";
    }
}

Animal** Cage::getAnimals()
{
    return Animals;
}

int Cage::getNAnimal()
{
    return NAnimal;
}

const char* Cage::getHabitat()
{
    return habitat;
}
