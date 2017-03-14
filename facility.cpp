#include "facility.h"
#include <iostream>
using namespace std;

Facility::Facility():Cell(){};
char* Facility::GetName()
{
    char* c=(char*)"facility";
    return c;
}

Road::Road():Facility(){};
char* Road::GetType()
{
    char* c=(char*)"Road";
    return c;
}
void Road::Render()
{
    cout<<" ";
}

Entrance::Entrance():Road(){};
char* Entrance::GetType()
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
char* Exit::GetType()
{
    return (char*)"Exit";
}

Restaurant::Restaurant():Facility(){};
char* Restaurant::GetType()
{
    char* c=(char*)"Restaurant";
    return c;
}
void Restaurant::Render()
{
    cout<<'R';
}


Park::Park():Facility(){};
char* Park::GetType()
{
    char* c=(char*)"Park";
    return c;
}
void Park::Render()
{
    cout<<"P";
}
