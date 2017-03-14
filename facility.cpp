#include "facility.h"
#include <iostream>
using namespace std;

Facility::Facility():Cell(){};
char* Facility::getname()
{
    char* c=(char*)"facility";
    return c;
}

Road::Road():Facility(){};
char* Road::gettype()
{
    char* c=(char*)"Road";
    return c;
}
void Road::Render()
{
    cout<<" ";
}
char* Road::getName()
{
    return name;
}
void Road::setName(char* _name)
{
    name=_name;
}  

Entrance::Entrance():Road(){};
char* Entrance::gettype()
{
    char* c=(char*)"Entrance";
    return c;
}
void Entrance::Render()
{
    cout<<'E';
}

Exit::Exit():Road(){};
void Exit::Render()
{
    cout<<'@';
}
char* Exit::gettype()
{
    return (char*)"Exit";
}

Restaurant::Restaurant():Facility(){};
char* Restaurant::gettype()
{
    char* c=(char*)"Restaurant";
    return c;
}
void Restaurant::Render()
{
    cout<<'R';
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
char* Park::gettype()
{
    char* c=(char*)"Park";
    return c;
}
void Park::Render()
{
    cout<<"P";
}
char* Park::getName()
{
    return parkname;
}
void Park::setName(char* name)
{
    parkname=name;
}
Habitat::Habitat():Cell(){};
char* Habitat::getname()
{
    char* c=(char*)"habitat";
    return c;
}
LandHabitat::LandHabitat():Habitat(){};
char* LandHabitat::gettype()
{
    char* c=(char*)"LandHabitat";
    return c;
}
void LandHabitat::Render()
{
    cout<<"l";
}


WaterHabitat::WaterHabitat():Habitat(){};
char* WaterHabitat::gettype()
{
    char* c=(char*)"WaterHabitat";
    return c;
}
void WaterHabitat::Render()
{
    cout<<"w";
}

AirHabitat::AirHabitat():Habitat(){};
char* AirHabitat::gettype()
{
    char* c=(char*)"AirHabitat";
    return c;
}
void AirHabitat::Render()
{
    cout<<"a";
}
