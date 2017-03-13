#include "cage.h"
#include <iostream>
using namespace std;
template <class T>
Cage<T>::Cage():Location(),size(0),habitat("")
{
    NAnimal=0;
    area=new Location[0];
    Animals=new T[0];
}
template <class T>
Cage<T>::Cage(char* hab, int size):Location(),size(size),habitat(hab)
{
    Animals=new T[size*2/3];
    NAnimal=0;
    area=new Location[size];
}
template <class T>
Cage<T>::~Cage()
{
    delete[] Animals;
    delete[] area;
}
template <class T>
Cage<T>::Cage(const Cage<T>& C)
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
template <class T>
Cage<T>& Cage<T>::operator=(const Cage& C)
{
    delete[] Animals;
    delete[] area;
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
template <class T>
int Cage<T>::getsize()
{
    return size;
}
template <class T>
Location* Cage<T>::getArea()
{
    return area;
}
template <class T>
void Cage<T>::MovementManager()
{
    
}
template <class T>
void Cage<T>::AddAnimal(T& A)
{
    if(NAnimal<(size*2/3))
    {
        NAnimal++;
        Animals[NAnimal]=A;
    }else
    {
        cout<<"full";
    }
}
template <class T>
T* Cage<T>::getAnimals()
{
    return Animals;
}
template <class T>
int Cage<T>::getNAnimal()
{
    return NAnimal;
}
template <class T>
const char* Cage<T>::gethabitat()
{
    return habitat;
}