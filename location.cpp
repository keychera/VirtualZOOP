//location.cpp

#include "location.h"

Location::Location():x(0),y(0){}
Location::Location(int _x,int _y):x(_x),y(_y){}

int Location::getX()	{return x;}
int Location::getY()	{return y;}
void Location::setX(int _x)	{ x = _x;}
void Location::setY(int _y)	{ x = _y;}

