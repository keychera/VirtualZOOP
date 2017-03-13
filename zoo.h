#include "cage.h"
#include <stdio.h>
#define DEFSIZE 10
class Zoo {
    public:
        Zoo();
        Zoo(int w, int l);
        Zoo(const Zoo& z);
        ~Zoo();
        Zoo& operator= (const Zoo& Z);
        Zoo ReadZoo(const char* filename);
        Cell** getCells();
       // Cage* getCages();
    private:
        Cell** Cells;
       // Cage<LandHabitat>* Cages;
        const int width;
        const int length;
};

Zoo::Zoo():width(DEFSIZE),length(DEFSIZE)
{
    *Cells=new Cell[width];
    for(int i=0;i<width;i++)
    {
        Cells[i]=new Cell[length];
    }
}
Zoo::Zoo(int w, int l):width(w),length(l)
{
    *Cells=new Cell[width];
    for(int i=0;i<width;i++)
    {
        Cells[i]=new Cell[length];
    }
}
Zoo::Zoo(const Zoo& z):width(z.width),length(z.length)
{
    for(int i=0;i<width;i++)
    {
        for(int j=0;j<length;j++)
        {
            Cells[i][j]=z.Cells[i][j];
        }
    }
}
Zoo::~Zoo()
{
    for(int i=0;i<width;i++)
    {
        delete[] Cells[i];
    }
}
Zoo& Zoo::operator= (const Zoo& Z)
{
    for(int i=0;i<width;i++)
    {
        delete[] Cells[i];
    }
    *Cells=new Cell[width];
    for(int i=0;i<width;i++)
    {
        Cells[i]=new Cell[length];
    }
    for(int i=0;i<width;i++)
    {
        for(int j=0;j<length;j++)
        {
            Cells[i][j]=Z.Cells[i][j];
        }
    }
}
Zoo Zoo::ReadZoo(const char* filename)
{
    FILE *f;
    f=fopen(filename,"r");
    char** map;
    int i=0;
    int w=0;
    int c;
    while((c=fgetc(f)!=EOF))
    {
        char ch=(char)c;
        cout<<c;
        if(ch=='\n')
        {
            map[i][w]='\0';
            i++;
            w=0;
        }else{
            map[i][w]=ch;
            w++;
        }
    }
    fclose(f);
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<w;k++)
        {
            cout<<map[j][k];
        }
        cout<<endl;
    }
    Zoo Z(w,i);
    for(i=0;i<Z.width;i++)
    {
        for(int j=0;j<Z.length;j++)
        {
            if(map[i][j]=='O')
            {
                AirHabitat A;
                Z.Cells[i][j]=A;
            }else if(map[i][j]=='#')
            {
                WaterHabitat W;
                Z.Cells[i][j]=W;
            }else if(map[i][j]=='X')
            {
                LandHabitat L;
                Z.Cells[i][j]=L;
            }else if(map[i][j]=='R')
            {
                Restaurant R;
                Z.Cells[i][j]=R;
            }else if(map[i][j]=='E')
            {
                Entrance E;
                Z.Cells[i][j]=E;
            }else if(map[i][j]=='P')
            {
                Park P;
                Z.Cells[i][j]=P;
            }else
            {
                Road R;
                Z.Cells[i][j]=R;
            }
        }
    }
    return Z;
}
Cell** Zoo::getCells()
{
    return Cells;
}