#ifndef HABITAT_H
#define HABITAT_H
#include "cell.h"
class Habitat: public Cell{
    public:
        Habitat();
        char* getname();
        virtual char* gettype()=0;
};

class LandHabitat: public Habitat{
    public:
        LandHabitat();
        void Render();
        char* gettype();
};

class WaterHabitat: public Habitat{
    public:
        WaterHabitat();
        void Render();
        char* gettype();
};

class AirHabitat: public Habitat{
    public:
        AirHabitat();
        void Render();
        char* gettype();
};
#endif