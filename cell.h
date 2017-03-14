#ifndef CELL_H
#define CELL_H
#include "animal_list.h"
#include <iostream>
using namespace std;
class Cell: public Renderable, public Location{
    public:
        Cell();
        Cell(int x, int y);
        //Cell& operator=(const Cell& C);
        virtual char* getname()=0;
        virtual char* gettype()=0;
};
#endif