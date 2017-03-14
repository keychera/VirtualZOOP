#ifndef ZOO_H
#define ZOO_H
#include "cage.h"
#include <stdio.h>
#include <string.h>
#define DEFSIZE 10
class Zoo {
    public:
        Zoo();
        Zoo(int w, int l);
        Zoo(const Zoo& z);
        ~Zoo();
        Zoo& operator= (const Zoo& Z);
        ReadZoo(const char* filename);
        int getwidth();
        int getlength();
        Cell** getCells();
        Cage** getCages();
        int getNCages();
        void MakeCage();
    private:
        Cell** Cells;
        Cage** Cages;
        int NCages;
        int width;
        int length;
};

#endif