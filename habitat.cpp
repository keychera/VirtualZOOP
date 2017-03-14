#include "habitat.h"
#include <iostream>
using namespace std;
Habitat::Habitat():Cell(){};
char* Habitat::GetName()
{
  char* c=(char*)"habitat";
  return c;
}
LandHabitat::LandHabitat():Habitat(){};
char* LandHabitat::GetType()
{
  char* c=(char*)"LandHabitat";
  return c;
}
void LandHabitat::Render()
{
  cout<<"^";
}


WaterHabitat::WaterHabitat():Habitat(){};
char* WaterHabitat::GetType()
{
  char* c=(char*)"WaterHabitat";
  return c;
}
void WaterHabitat::Render()
{
  cout<<"~";
}

AirHabitat::AirHabitat():Habitat(){};
char* AirHabitat::GetType()
{
  char* c=(char*)"AirHabitat";
  return c;
}
void AirHabitat::Render()
{
  cout<<"*";
}
