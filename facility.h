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
        char* gettype();
        void Render();
};

class Exit: public Road{
    public:
        Exit();
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

#endif
