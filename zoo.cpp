#include "zoo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

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
  //cout<<"dtor";
  for(int i=0;i<NCages;i++)
  {
    delete Cages[i];
  }
  //cout<<"dtor";
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
  return *this;
}

void Zoo::ReadZoo(const char* filename)
{
  FILE *f;
  f=fopen(filename,"r");
  fseek (f , 0 , SEEK_END);
  int lSize = ftell (f);
  rewind (f);
  // allocate memory to contain the whole file:
  delete[] Cells;
  Cells=new Cell*[lSize];
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
      if(ch=='a')
      {
        Cells[j]=new AirHabitat;   
      }else if (ch=='w')
      {
        Cells[j]=new WaterHabitat;
      }else if(ch=='l')
      {
        Cells[j]=new LandHabitat;
      }else if(ch=='R')
      {
        Cells[j]=new Restaurant;
      }else if(ch=='P')
      {
        Cells[j]=new Park;
      }else if(ch=='E')
      {
        Cells[j]=new Entrance;
      }else if(ch=='@')
      {
        Cells[j]=new Exit;
      }else{
        Cells[j]=new Road;
      }
      //cout<<j<<Cells[j]->GetType()<<endl;
      j++;
    }
  }
  cout<<"done";
  fclose(f);
  length=w;
  width=i;
  cout<<width;
  cout<<length;
  for(int i=0;i<(j);i++)
  {
    Cells[i]->SetX(i%length);
    Cells[i]->SetY(i/length);
  }
  cout<<"done";
}

int Zoo::GetWidth()
{
  return width;
}

int Zoo::GetLength()
{
  return length;
}

Cell** Zoo::GetCells()
{
  return Cells;
}

Cage** Zoo::GetCages()
{
  return Cages;
}

int Zoo::GetNCages()
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
    if((!check[count])&&(strcmp(Cells[count]->GetName(),"habitat")==0))
      {
        int* queue;
        int i=0;
        queue = (int*) malloc (sizeof(int)*(width*length));
        int checked=0;
        char* name;
        name=Cells[count]->GetType();
        //cout<<name<<endl;
        queue[i]=count;
        check[queue[i]]=true;
        while((checked<=i)&&(checked<(width*length)))
        {
          if((queue[checked]+1>=0)&&(queue[checked]+1<(width*length))&&(!check[queue[checked]+1]))
          {
            if(strcmp(Cells[queue[checked]+1]->GetType(),name)==0)
            {
              i++;
              queue[i]=queue[checked]+1;
              check[queue[i]]=true;
            }
          }
          if((queue[checked]-1>=0)&&(queue[checked]-1<(width*length))&&(!check[queue[checked]-1]))
          {
            if(strcmp(Cells[queue[checked]-1]->GetType(),name)==0)
            {
              i++;
              queue[i]=queue[checked]-1;
              check[queue[i]]=true;
            }
          }
          if((queue[checked]+length>=0)&&(queue[checked]+length<(width*length))&&(!check[queue[checked]+length]))
          {
            if(strcmp(Cells[queue[checked]+length]->GetType(),name)==0)
            {
              i++;
              queue[i]=queue[checked]+length;
              check[queue[i]]=true;
            }
          }
          if((queue[checked]-length>=0)&&(queue[checked]+length<(width*length))&&(!check[queue[checked]-length]))
          {
            if(strcmp(Cells[queue[checked]-length]->GetType(),name)==0)
            {
              i++;
              queue[i]=queue[checked]-length;
              check[queue[i]]=true;
            }
          }
          checked++;
        }
        NCages++;
        //menyimpan cage baru di C
        Cage* C=new Cage(name,i+1);
        for(int ar=0;ar<(i+1);ar++)
        {
          Location L((queue[ar]%length),(queue[ar]/length));
          C->GetArea()[ar]=L;
        }
        //membuat array temp untuk menyimpan array cage lama
        Cage** temp=new Cage*[NCages];
        int p;
        for(p=0;p<(NCages-1);p++)
          {
            temp[p]=Cages[p];
          }
        temp[p]=C;
        //menginisialisasi ukuran baru dan memasukkan temp ke cages
        delete[] Cages;
        Cages= new Cage*[NCages];
        for(int i=0;i<(NCages);i++)
        {
          Cages[i]=temp[i];
        }
        delete[] temp; 
        free(queue);
      }
    check[count]=true;
    count++;
  }
}
void Zoo::ReadAnimal(const char *filename) {
// map_animal.txt formatnya selalu "C3", yaitu kode hewan dan jumlah hewan
// hewan = menentukan hewan apa yg di implementasi di map
// n_hewan = menentukan jumlah hewan yg dibuat
	ifstream f;
	f.open(filename);
	char output[2];
	char hewan;
	int n_hewan;
	if (f.is_open()) {
		while (!f.eof()) {
			f >> output;
			hewan = output[0];
			n_hewan = ((int) output[1] - 48);
      Animal* A;
		  for(int i=1;i<=n_hewan;i++)
      {
        if(hewan=='c')
        {
          A=new Cat;
        }else if(hewan=='C')
        {
          A=new Cheetah;
        }else if(hewan=='L')
        {
          A=new Lion;
        }else if(hewan=='l')
        {
          A=new Leopard;
        }else if(hewan=='T')
        {
          A=new Tiger;
        }else if(hewan=='B')
        {
          A=new Beluga;
        }else if(hewan=='N')
        {
          A=new Narwhal;
        }else if(hewan=='D')
        {
          A=new Dolphin;
        }else if(hewan=='O')
        {
          A=new Orca;
        }else if(hewan=='d')
        {
          A=new Damselfish;
        }else if(hewan=='c')
        {
          A=new Coyote;
        }else if(hewan=='W')
        {
          A=new Wolf;
        }else if(hewan=='F')
        {
          A=new RedFox;
        }else if(hewan=='f')
        {
          A=new ArcticFox;
        }else if(hewan=='K')
        {
          A=new Komodo;
        }else if(hewan =='b')
        {
          A=new Biawak;
        }else if(hewan=='J')
        {
          A=new BadakJawa;
        }else if(hewan=='S')
        {
          A=new BadakSumatra;
        }else if(hewan=='E')
        {
          A=new BaldEagle;
        }else if(hewan=='e')
        {
          A=new GoldenEagle;
        }else if(hewan=='R')
        {
          A=new RedKite;
        }else if(hewan=='k')
        {
          A=new BlackKite;
        }else
        {
          A=new Axolotl;
        }
        AddAnimaltoZoo(A);
      }
		}
	}
	f.close();
}
void Zoo::AddAnimaltoZoo(Animal* A)
{
  if(A->IsLand())
  {
    bool found=false;
    int i=0;
    while((i<NCages)&&(!found))
    {
      if((strcmp(Cages[i]->GetHabitat(),"LandHabitat")))
      {
        found=true;
      }else{
        i++;
      }
    }
    if(i==NCages)
    {
      cout<<"gagal";
    }else
    {
      Cages[i]->AddAnimal(A);
    }
  }else if(A->IsWater())
  {
    bool found=false;
    int i=0;
    while((i<NCages)&&(!found))
    {
      if((strcmp(Cages[i]->GetHabitat(),"WaterHabitat")))
      {
        found=true;
      }else{
        i++;
      }
    }
    if(i==NCages)
    {
      cout<<"gagal";
    }else
    {
      Cages[i]->AddAnimal(A);
    }
  }else
  {
    bool found=false;
    int i=0;
    while((i<NCages)&&(!found))
    {
      if((strcmp(Cages[i]->GetHabitat(),"AirHabitat")))
      {
        found=true;
      }else{
        i++;
      }
    }
    if(i==NCages)
    {
      cout<<"gagal";
    }else
    {
      Cages[i]->AddAnimal(A);
    }
  }
}
Cell* Zoo::AccessCell(int x,int y){
  int i = 0;
  bool found = false;
  while ((i < width*length) && !found) {
    if ((Cells[i]->GetX() == x) && (Cells[i]->GetY() == y)) {
      found = true;
    }else{
      i++;
    }
  }
  if (i != width*length)
    return Cells[i];
  else
    return NULL;
}

int Zoo::GetIndexCage(int x,int y)
{
  Location L(x,y);
  bool found=false;
  int i=0;
  while((!found)&&(i<NCages))
  {
    if(Cages[i]->IsInCage(L))
    {
      found=true;
      }else
    {
      i++;
    }
  }
  return i;
}

void Zoo::Print()
{
  for(int i=0;i<width;i++)
    {
      for(int j=0;j<length;j++)
      {
        if(strcmp(Cells[i*length+j]->GetName(),"habitat")==0)
        {
          int indeks=GetIndexCage(i,j);
          cout<<indeks<<endl;
          int iAn=-1;
          if(Cages[indeks]->GetNAnimal()>0)
          {
            for(int k=0;k<Cages[indeks]->GetNAnimal();k++)
            {
              if((Cages[indeks]->GetAnimals()[k]->GetX()==i)&&(Cages[indeks]->GetAnimals()[k]->GetY()==j))
              {
                iAn=k;
              }
            }
          }
          
          cout<<"done";
          if(iAn!=(-1))//ada animal
          {
            Cages[indeks]->GetAnimals()[iAn]->Render();
          }else
          {
            Cells[i*length+j]->Render();
          }
        }else
        {
          cout<<"non";
          Cells[i*length+j]->Render();
        }
      }
      cout<<endl;
    }
}