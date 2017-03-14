#include "facility.h"
#include <iostream>
using namespace std;

Facility::Facility():Cell(){};
char* Facility::getName()
{
    char* c=(char*)"facility";
    return c;
}

Road::Road():Facility(){};
char* Road::getType()
{
    char* c=(char*)"Road";
    return c;
}
void Road::Render()
{
    cout<<" ";
}

Entrance::Entrance():Road(){};
char* Entrance::getType()
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
char* Exit::getType()
{
    return (char*)"Exit";
}

Restaurant::Restaurant():Facility(){};
char* Restaurant::getType()
{
    char* c=(char*)"Restaurant";
    return c;
}
void Restaurant::Render()
{
    cout<<'R';
}


Park::Park():Facility(){};
char* Park::getType()
{
    char* c=(char*)"Park";
    return c;
}
void Park::Render()
{
    cout<<"P";
}
