#include "animal.h"
#include <iostream>
using namespace  std;
template <class T>
class Cage:public Animal{
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
        void AddAnimal(T& A);
        T* getAnimals();
        int getNAnimal();
        const char* gethabitat();
    private:
        T* Animals;
        int NAnimal;
        const char* habitat;
        const int size;
        Location* area;
};
