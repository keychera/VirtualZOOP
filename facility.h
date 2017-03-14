#ifndef FACILITY_H
#define FACILITY_H
#include "cell.h"
class Facility:public Cell{
    public:
        Facility();
        //virtual void setName(char* name)=0;
        virtual char* getType()=0;
        char* getName();
};

class Road: public Facility{
    public:
        Road();
        virtual char* getType();  
        virtual void Render();
        /*char* getFacilityName
        void setName(char* _name);   
    protected:
        char* name;*/
};

class Entrance: public Road{
    public:
        Entrance();
        char* getType();
        void Render();
};

class Exit: public Road{
    public:
        Exit();
        void Render();
        char* getType();
};

class Restaurant: public Facility{
    public:
        Restaurant();
        void Render();
        //void setName(char* name);
        char* getType();
    //private:
      //  char* RestName;
};

class Park: public Facility{
    public:
        Park();
        void Render();
        //void setName(char* name);
        char* getType();
   // private:
     //   char* parkname;*/
};

#endif