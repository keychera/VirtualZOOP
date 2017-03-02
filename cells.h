class Zoo : {
    public:
        Zoo();
        Zoo(int w, int l);
        Zoo(const Zoo& z);
        ~Zoo();
        Zoo& operator= (const Zoo& Z);
    protected:
        Cell** Cells;
        const int width;
        const int length;
}

class Cell: public Renderable{
    public:
        virtual render();
        void getLoc();
    private:
        Location Loc;
}
class Habitat: public Cell{
    public:
        virtual render();
        void AddAnimal(Animal A);
    protected:
        Animal* Animals;
        int NAnimal;
}
class LandHabitat: public Habitat{
    public:
        LandHabitat();
        LandHabitat(const LandHabitat& L);
        ~LandHabitat();
        LandHabitat& operator=(const LandHabitat& L);
        void render();
}

class WaterHabitat: public Habitat{
    public:
        WaterHabitat();
        WaterHabitat(const WaterHabitat& W);
        ~WaterHabitat();
        WaterHabitat& operator= (const WaterHabitat& W);
        void render();
}

class AirHabitat: public Habitat{
    public:
        AirHabitat();
        AirHabitat(const AirHabitat& A);
        ~AirHabitat();
        AirHabitat& operator= (const WaterHabitat& A);
        void render();
}

class Facility:public Cell{
    public:
        virtual char* getName();
}

class Road: public Facility{
    public:
        Road();
        Road(const Road& R);
        ~Road();
        Road& operator=(const Road& R);            
}
class Entrance: public Road{
    public:
        Entrance();
        Entrance(const Entrance& E);
        ~Entrance();
        Entrance& operator=(const Entrance& E);
}
class Exit: public Road{
    public:
        Exit();
        Exit(const Exit& E);
        ~Exit();
        Exit& operator=(const Exit& E)
}

class Restaurant: public Faciliy{
    public:
        void render();
        char* getName();
    private:
        char* Name;
}

class Park: public Facility{
    public:
        void render();
        char* getName();
    private:
        char* parkname;
}

class Cage: public Renderable, public Location{
    public:
        Cage();
        Cage(Habitat H, int size);
        ~Cage();
        Cage& operator=(const Cage& C);
        char* getHabitat();
        int getsize();
        Location* getArea();
    private:
        char* habitat
        const int size;
        Location* area;
}