#ifndef FACILITY_H
#define FACILITY_H
#include "cell.h"
class Facility:public Cell{
    public:
        Facility();
        virtual char* GetType()=0;
        char* GetName();
};

class Road: public Facility{
    public:
        Road();
        virtual char* GetType();  
        virtual void Render();
};

class Entrance: public Road{
    public:
        Entrance();
        char* GetType();
        void Render();
};

class Exit: public Road{
    public:
        Exit();
        void Render();
        char* GetType();
};

class Restaurant: public Facility{
    public:
        Restaurant();
        void Render();
        char* GetType();
};

class Park: public Facility{
    public:
        Park();
        void Render();
        char* GetType();
};

#endif
