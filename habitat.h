#ifndef HABITAT_H
#define HABITAT_H
#include "cell.h"
class Habitat: public Cell{
    public:
        Habitat();
        char* getName();
        virtual char* getType()=0;
};

class LandHabitat: public Habitat{
    public:
        LandHabitat();
        void Render();
        char* getType();
};

class WaterHabitat: public Habitat{
    public:
        WaterHabitat();
        void Render();
        char* getType();
};

class AirHabitat: public Habitat{
    public:
        AirHabitat();
        void Render();
        char* getType();
};
#endif