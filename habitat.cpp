#include "habitat.h"
#include <iostream>
using namespace std;
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
