#include "habitat.h"
#include <iostream>
using namespace std;
Habitat::Habitat():Cell(){};
char* Habitat::getName()
{
    char* c=(char*)"habitat";
    return c;
}
LandHabitat::LandHabitat():Habitat(){};
char* LandHabitat::getType()
{
    char* c=(char*)"LandHabitat";
    return c;
}
void LandHabitat::Render()
{
    cout<<"l";
}


WaterHabitat::WaterHabitat():Habitat(){};
char* WaterHabitat::getType()
{
    char* c=(char*)"WaterHabitat";
    return c;
}
void WaterHabitat::Render()
{
    cout<<"w";
}

AirHabitat::AirHabitat():Habitat(){};
char* AirHabitat::getType()
{
    char* c=(char*)"AirHabitat";
    return c;
}
void AirHabitat::Render()
{
    cout<<"a";
}
