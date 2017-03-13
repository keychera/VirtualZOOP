//animal.cpp

#include "animal.h"
#include <string.h>

//AnimalDiet

AnimalDiet::AnimalDiet():weight(1),meatDiet(false),plantDiet(false){}
AnimalDiet::AnimalDiet(int w,bool m,bool p):weight(w),meatDiet(m),plantDiet(p){}

bool AnimalDiet::IsCarnivore()	{ return meatDiet;}
bool AnimalDiet::IsHerbivore()	{ return plantDiet;}
bool AnimalDiet::IsOmnivore()	{ return meatDiet && plantDiet;}


//AnimalTameStatus

AnimalTameStatus::AnimalTameStatus():tame(true){}
AnimalTameStatus::AnimalTameStatus(bool t):tame(t){}

bool AnimalTameStatus::IsTame()	{return tame;}


//AnimalHabitat

AnimalHabitat::AnimalHabitat():land(false),water(false),flying(false){}
AnimalHabitat::AnimalHabitat(bool l,bool w,bool f):land(l),water(w),flying(f){}


bool AnimalHabitat::IsLand()	{return land;}
bool AnimalHabitat::IsWater()	{return water;}
bool AnimalHabitat::IsFlying()	{return flying;}


//AnimalClassification

AnimalClassification::AnimalClassification():family(""),genus(""),species(""){}
AnimalClassification::AnimalClassification(const char *f,const char *g,const char *s):family(f),genus(g),species(s){}

	//ctor here ?

const char* AnimalClassification::GetFamily()	{return family;}
const char* AnimalClassification::GetGenus()	{return genus;}
const char* AnimalClassification::GetSpecies()	{return species;}

//Animal

Animal::Animal(){};

//Land,Water,Flying,Amphibian animal is already simply defined in the header

//Animal Realization classes
	
//Cat
	Cat::Cat():AnimalDiet(10,true,false),AnimalTameStatus(true),AnimalClassification("Felidae","Felis","catus"),AnimalHabitat(1,0,0){}
	Cat::Cat(int w):AnimalDiet(w,true,false),AnimalTameStatus(true),AnimalClassification("Felidae","Felis","catus"),AnimalHabitat(1,0,0){}

	const char* Cat::Interact (){
		return "NYAA";
	}
		
	void Cat::Render (){
		
	}
