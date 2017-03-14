#include "zoo.h"
#include <stdio.h>
#include <string.h>
Zoo::Zoo():width(DEFSIZE),length(DEFSIZE)
{
    Cells=new Cell*[width*length];
    Cages=new Cage*[DEFSIZE];
}
Zoo::Zoo(int w, int l):width(w),length(l)
{
    Cells=new Cell*[width*length];
    Cages=new Cage*[DEFSIZE];
}
Zoo::Zoo(const Zoo& z):width(z.width),length(z.length)
{
    NCages=z.NCages;
    for(int i=0;i<(width*length);i++)
    {
        Cells[i]=z.Cells[i];
    }
    for(int i=0;i<NCages;i++)
    {
        Cages[i]=z.Cages[i];
    }
}
Zoo::~Zoo()
{  
    delete[] Cells;
    delete[] Cages;
}
Zoo& Zoo::operator= (const Zoo& Z)
{
    delete[] Cells;
    delete[] Cages;
    Cells=new Cell*[width*length];
    Cages=new Cage*[Z.NCages];
        for(int j=0;j<(width*length);j++)
        {
            Cells[j]=Z.Cells[j];
        }
        for(int j=0;j<NCages;j++)
        {
            Cages[j]=Z.Cages[j];
        }
}
void Zoo::ReadZoo(const char* filename)
{
    FILE *f;
    f=fopen(filename,"r");
    char* map;
    fseek (f , 0 , SEEK_END);
    int lSize = ftell (f);
    rewind (f);

  // allocate memory to contain the whole file:
   map = (char*) malloc (sizeof(char)*lSize);
    int i=0;
    int j=0;
    int w=0;
    int c;
    char ch;
    while((c=fscanf(f,"%c",&ch)!=EOF))
    {
        if(ch=='\n')
        {
            i++;
            if(i==1)
            {
                w=j;
            }
        }else{
            map[j]=ch;
            j++;
        }
    }
    fclose(f);
    length=w;
    width=i;
    for(i=0;i<width;i++)
    {
        for(int j=0;j<length;j++)
        {
            int indeks=i*(length)+j;
            if(map[indeks]=='O')
            {
                cout<<map[indeks];
                Cells[indeks]=new AirHabitat;
            }else if(map[indeks]=='#')
            {
                Cells[indeks]=new WaterHabitat;
            }else if(map[indeks]=='X')
            {
                Cells[indeks]=new LandHabitat;
            }else if(map[indeks]=='R')
            {
                Cells[indeks]=new Restaurant;
            }else if(map[indeks]=='E')
            {
                Cells[indeks]=new Entrance;
            }else if(map[indeks]=='P')
            {
                Cells[indeks]=new Park;
            }else if(map[indeks]=='@')
            {
                Cells[indeks]=new Exit;
            }else
            {
                Cells[indeks]=new Road;
            }
            cout<<indeks<<map[indeks];
            Cells[indeks]->Render();
            cout<<Cells[indeks]->gettype()<<endl;
            Cells[indeks]->setX(j);
            Cells[indeks]->setY(i);
        }
    }
    free(map);
}
int Zoo::getwidth()
{
    return width;
}
int Zoo::getlength()
{
    return length;
}
Cell** Zoo::getCells()
{
    return Cells;
}
Cage** Zoo::getCages()
{
    return Cages;
}
int Zoo::getNCages()
{
    return NCages;
}
void Zoo::MakeCage()
{
    NCages=0;
    bool check[width*length];
    for(int i=0;i<(width*length);i++)
    {
        check[i]=false;
    }
    int count=0;
    while(count<(width*length))
    {
        if((!check[count])&&(strcmp(Cells[count]->getname(),"habitat")==0))
        {
           
            int* queue;
            int i=0;
            queue = (int*) malloc (sizeof(int)*(width*length));
            int checked=0;
            char* name;
            name=Cells[count]->gettype();
            cout<<name<<endl;
            queue[i]=count;
            check[queue[i]]=true;
            while((checked<=i)&&(checked<(width*length)))
            {
                if((queue[checked]+1>=0)&&(queue[checked]+1<(width*length))&&(!check[queue[checked]+1]))
                {
                    //if(strcmp(Cells[queue[checked]+1]->getname(),"habitat")==0)
                    //{
                        if(strcmp(Cells[queue[checked]+1]->gettype(),name)==0)
                        {
                            i++;
                            queue[i]=queue[checked]+1;
                            check[queue[i]]=true;
                        }
                    //}
                }
                if((queue[checked]-1>=0)&&(queue[checked]-1<(width*length))&&(!check[queue[checked]-1]))
                {
                    //if(strcmp(Cells[queue[checked]-1]->getname(),"habitat")==0)
                    //{
                        cout<<queue[checked]-1;
                        if(strcmp(Cells[queue[checked]-1]->gettype(),name)==0)
                        {
                            i++;
                            queue[i]=queue[checked]-1;
                            check[queue[i]]=true;
                        }
                    //}
                }
                if((queue[checked]+length>=0)&&(queue[checked]+length<(width*length))&&(!check[queue[checked]+length]))
                {
                    //if(strcmp(Cells[queue[checked]+length]->getname(),"habitat")==0)
                    //{
                        if(strcmp(Cells[queue[checked]+length]->gettype(),name)==0)
                        {
                            i++;
                            queue[i]=queue[checked]+length;
                            check[queue[i]]=true;
                        }
                    //}
                }
                if((queue[checked]-length>=0)&&(queue[checked]+length<(width*length))&&(!check[queue[checked]-length]))
                {
                
                        if(strcmp(Cells[queue[checked]-length]->gettype(),name)==0)
                        {
                            i++;
                            queue[i]=queue[checked]-length;
                            check[queue[i]]=true;
                        }
                    //}
                }
                checked++;
            }
            NCages++;
            Cages[NCages-1]=new Cage(name,i+1);
            for(int ar=0;ar<(i+1);ar++)
            {
                Location L((queue[ar]%length),(queue[ar]/length));
                Cages[NCages-1]->getArea()[ar]=L;
            }
            free(queue);
        }
        check[count]=true;
        count++;
    }
}