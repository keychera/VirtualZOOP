//location.cpp

#include "location.h"

Location::Location():x(0),y(0){}
Location::Location(int _x,int _y):x(_x),y(_y){}

int Location::GetX()	{return x;}
int Location::GetY()	{return y;}
void Location::SetX(int _x)	{ x = _x;}
void Location::SetY(int _y)	{ y = _y;}

