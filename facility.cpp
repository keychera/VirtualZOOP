#include "facility.h"
#include <iostream>
using namespace std;

Facility::Facility():Cell(){};


Road::Road():Facility(){};
void Road::render()
{
    cout<<"Road";
}


Entrance::Entrance():Road(){};
void Entrance::render()
{
    cout<<"En"<<EntranceNumber;
}
int Entrance::getEntranceNumber()
{
    return EntranceNumber;
}

Exit::Exit():Road(){};
void Exit::render()
{
    cout<<"Ex"<<ExitNumber;
}
int Exit::getExitNumber()
{
    return ExitNumber;
}

Restaurant::Restaurant():Facility(){};
void Restaurant::render()
{
    cout<<RestName;
}
char* Restaurant::getName()
{
    return RestName;
}
void Restaurant::setName(char* name)
{
    RestName=name;
}

Park::Park():Facility(){};
void Park::render()
{
    cout<<"P"<<parkname;
}
char* Park::getName()
{
    return parkname;
}
void Park::setName(char* name)
{
    parkname=name;
}