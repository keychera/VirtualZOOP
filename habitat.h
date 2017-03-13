#include "cell.h"
class Habitat: public Cell{
    public:
        Habitat();
        virtual void render()=0;
        virtual const char* gethabitat()=0;
};

class LandHabitat: public Habitat{
    public:
        LandHabitat();
        //LandHabitat(const LandHabitat& L);
        //~LandHabitat();
        //LandHabitat& operator=(const LandHabitat& L);
        void render();
        const char* gethabitat();
    private:
        const char* habitat="LandHabitat";
};

class WaterHabitat: public Habitat{
    public:
        WaterHabitat();/*
        WaterHabitat(const WaterHabitat& W);
        ~WaterHabitat();
        WaterHabitat& operator= (const WaterHabitat& W);*/
        void render();
        const char* gethabitat();
    private:
        const char* habitat="WaterHabitat";
};

class AirHabitat: public Habitat{
    public:
        AirHabitat();
        //AirHabitat(const AirHabitat& A);
        //~AirHabitat();
        //AirHabitat& operator= (const WaterHabitat& A);
        void render();
        const char* gethabitat();
    private:
        const char* habitat="AirHabitat";
};