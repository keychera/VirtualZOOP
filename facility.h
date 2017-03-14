#ifndef FACILITY_H
#define FACILITY_H
#include "cell.h"
class Facility:public Cell{
    public:
        Facility();
        virtual char* getName()=0;
        virtual void setName(char* name)=0;
        virtual char* gettype()=0;
        char* getname();
};

class Road: public Facility{
    public:
        Road();
        //Road(const Road& R);
        //~Road();
        //Road& operator=(const Road& R);   
        virtual char* gettype();  
        virtual void Render();
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
        char* gettype();
        void Render();
};

class Exit: public Road{
    public:
        Exit();
        //Exit(const Exit& E);
        //~Exit();
        //Exit& operator=(const Exit& E);
        void Render();
        char* gettype();
};

class Restaurant: public Facility{
    public:
        Restaurant();
        void Render();
        char* getName();
        void setName(char* name);
        char* gettype();
    private:
        char* RestName;
};

class Park: public Facility{
    public:
        Park();
        void Render();
        char* getName();
        void setName(char* name);
        char* gettype();
    private:
        char* parkname;
};
class Habitat: public Cell{
    public:
        Habitat();
        char* getname();
        virtual char* gettype()=0;
};

class LandHabitat: public Habitat{
    public:
        LandHabitat();
        //LandHabitat(const LandHabitat& L);
        //~LandHabitat();
        //LandHabitat& operator=(const LandHabitat& L);
        void Render();
        char* gettype();
};

class WaterHabitat: public Habitat{
    public:
        WaterHabitat();/*
        WaterHabitat(const WaterHabitat& W);
        ~WaterHabitat();
        WaterHabitat& operator= (const WaterHabitat& W);*/
        void Render();
        char* gettype();
};

class AirHabitat: public Habitat{
    public:
        AirHabitat();
        //AirHabitat(const AirHabitat& A);
        //~AirHabitat();
        //AirHabitat& operator= (const WaterHabitat& A);
        void Render();
        char* gettype();
};
#endif