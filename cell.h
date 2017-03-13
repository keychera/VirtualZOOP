#include "animal.h"
#include <iostream>
using namespace std;
class Cell: public Renderable, public Location{
    public:
        Cell();
        Cell(int x, int y);
        virtual void render()=0;
};