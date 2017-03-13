#include "facility.h"
#include <iostream>
using namespace std;

Facility::Facility():Cell(){};

Road::Road():Facility(){};
void Road::render()
{
    cout<<"Road";
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
void Entrance::render()
{
    cout<<'E';
}

Exit::Exit():Road(){};
void Exit::render()
{
    cout<<'x';
}

Restaurant::Restaurant():Facility(){};
void Restaurant::render()
{
    cout<<'r';
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

LandHabitat::LandHabitat():Habitat(){};
void LandHabitat::render()
{
    cout<<"LH";
}
const char* LandHabitat::gethabitat()
{
    return habitat;
}


WaterHabitat::WaterHabitat():Habitat(){};
void WaterHabitat::render()
{
    cout<<"WH";
}
const char* WaterHabitat::gethabitat()
{
    return habitat;
}

AirHabitat::AirHabitat():Habitat(){};
void AirHabitat::render()
{
    cout<<"AH";
}
const char* AirHabitat::gethabitat()
{
    return habitat;
}
