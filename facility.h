#ifndef FACILITY_H
#define FACILITY_H

#include "cell.h"
class Facility:public Cell{
    public:
        Facility();
        virtual void render()=0;
        virtual char* getName()=0;
        virtual void setName(char* name)=0;
};

class Road: public Facility{
    public:
        Road();
        //Road(const Road& R);
        //~Road();
        //Road& operator=(const Road& R);     
        virtual void render();
        char* getName();
        void setName(char* _name);   
    protected:
        char* name;
};

class Entrance: public Road{
    public:
        Entrance();
        //Entrance(const Entrance& E);
        //~Entrance();
        //Entrance& operator=(const Entrance& E);
        void render();
};

class Exit: public Road{
    public:
        Exit();
        //Exit(const Exit& E);
        //~Exit();
        //Exit& operator=(const Exit& E);
        void render();
};

class Restaurant: public Facility{
    public:
        Restaurant();
        void render();
        char* getName();
        void setName(char* name);
    private:
        char* RestName;
};

class Park: public Facility{
    public:
        Park();
        void render();
        char* getName();
        void setName(char* name);
    private:
        char* parkname;
};
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

#endif
