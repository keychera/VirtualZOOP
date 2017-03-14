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

int Cage::GetSize()
{
  return size;
}

Location* Cage::GetArea()
{
  return area;
}
void Cage::MovementManager()
{
  srand(time(NULL));
  for(int i=0;i<NAnimal;i++)
  {
    int random=rand()%4;
    bool Moved=false;
    int count=0;
    while((!Moved)&&(count<=4))
    {
      Location m=Move(Animals[i],random);
      if ((IsInCage(m)&&(!IsThereAnimal(m))))
      {
        Animals[i]->SetX(m.GetX());
        Animals[i]->SetY(m.GetY());
        Moved=true;
      }
      count++;
      random=(random+1)%4;
    }
  }
}
Location Cage::Move(Animal* A,int i)
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
bool Cage::IsThereAnimal(Location& L)
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
bool Cage::IsInCage(Location& L)
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
    bool ok=true;
    if(!(A->IsTame()))
    {
      j=0;
      while((ok)&&(j<NAnimal))
      {
        if(strcmp(Animals[j]->GetSPecies(),A->GetSpecies())!=0)
	{
          ok=false;
	}
        j++;
      }
    }
      if(ok)
      {
        Animals[NAnimal]=A;
        int i=0;
        bool found=false;
        while((i<size)&&(!found))
        {
          if(!IsThereAnimal(area[i]))
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
         cout<<"hewan tidak jinak";
      }
  }else
  {
     cout<<"full";
  }
}

Animal** Cage::GetAnimals()
{
  return Animals;
}

int Cage::GetNAnimal()
{
  return NAnimal;
}

const char* Cage::GetHabitat()
{
  return habitat;
}
