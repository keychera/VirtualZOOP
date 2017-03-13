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
};

class Entrance: public Road{
    public:
        Entrance();
        //Entrance(const Entrance& E);
        //~Entrance();
        //Entrance& operator=(const Entrance& E);
        virtual void render();
        int getEntranceNumber();
    private:
        int EntranceNumber;
};

class Exit: public Road{
    public:
        Exit();
        //Exit(const Exit& E);
        //~Exit();
        //Exit& operator=(const Exit& E);
        void render();
        int getExitNumber();
    private:
        int ExitNumber;
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
