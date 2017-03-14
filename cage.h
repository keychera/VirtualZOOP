#ifndef CAGE_H
#define CAGE_H
#include "facility.h"
#include "habitat.h"
#include <iostream>
using namespace  std;
class Cage{
    public:
        Cage();
        Cage(char* hab, int size);
        ~Cage();
        Cage(const Cage& C);
        Cage& operator=(const Cage&);
        char* getHabitat();
        int getsize();
        Location* getArea();
        void MovementManager();
        Location move(Animal* A,int i);
        bool isthereanimal(Location& L);
        bool isInCage(Location& L);
        void AddAnimal(Animal* A);
        Animal** getAnimals();
        int getNAnimal();
        const char* gethabitat();
    private:
        Animal** Animals;
        int NAnimal;
        const char* habitat;
        const int size;
        Location* area;
};
#endif