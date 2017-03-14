#ifndef HABITAT_H
#define HABITAT_H
#include "cell.h"
class Habitat: public Cell{
    public:
        Habitat();
        char* GetName();
        virtual char* GetType()=0;
};

class LandHabitat: public Habitat{
    public:
        LandHabitat();
        void Render();
        char* GetType();
};

class WaterHabitat: public Habitat{
    public:
        WaterHabitat();
        void Render();
        char* GetType();
};

class AirHabitat: public Habitat{
    public:
        AirHabitat();
        void Render();
        char* GetType();
};
#endif