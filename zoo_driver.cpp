#include "zoo.h"
#include "tour.h"
#include <iomanip>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
using namespace std;
int main() {
    srand(time(NULL));
    string filename="map.txt";
	Zoo Z;
    Z.ReadZoo(filename.c_str());
    cout<<"width:"<<Z.GetWidth()<<endl;
    cout<<"length:"<<Z.GetLength()<<endl;
    filename="map_animal.txt";
    Z.MakeCage();
    Z.ReadAnimal(filename.c_str());
    Z.Print();
  char tourYES;
  cout << "Input a char 'Y' to begin the tour" << endl;
  cin >> tourYES;
  if (tourYES == 'Y') {
    cout << "Tour begins" << endl << endl;
    Tour t(Z);
    while(t.GetRoutePointer() < t.GetRouteDistance()-1)
    {
        for(int i=0;i<Z.GetNCages();i++)
        {
            Z.GetCages()[i]->MovementManager();
        }
        Z.Print();
        t.TraceRoute();
        Sleep(500);
        system("CLS");
    }
    cout << endl << "Tour ends" << endl ;
  } else {
    cout << "Tour doesn't begin" << endl << endl;
  }
  cout<<"done" << endl;
return 0;
}
