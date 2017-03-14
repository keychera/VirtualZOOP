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
        
        void ReadZoo(const char* filename);
        
        int GetWidth();
        int GetLength();
        Cell** GetCells();
        Cage** GetCages();
        int GetNCages();
        
        Cell* AccessCell(int x,int y);
        
        void MakeCage();
        
        
    private:
        Cell** Cells;
        Cage** Cages;
        int NCages;
        int width;
        int length;
};

#endif
