//animal.cpp

#include "animal.h"
#include <string.h>

//AnimalDiet

AnimalDiet::AnimalDiet():weight(1),meatDiet(false),plantDiet(false){}
AnimalDiet::AnimalDiet(int _weight,bool _meat,bool _plant):weight(_weight),meatDiet(_meat),plantDiet(_plant){}

bool AnimalDiet::IsCarnivore()	{ return meatDiet;}
bool AnimalDiet::IsHerbivore()	{ return plantDiet;}
bool AnimalDiet::IsOmnivore()	{ return meatDiet && plantDiet;}


//AnimalTameStatus

AnimalTameStatus::AnimalTameStatus():tame(true){}
AnimalTameStatus::AnimalTameStatus(bool _tame):tame(_tame){}

bool AnimalTameStatus::IsTame()	{return tame;}


//AnimalHabitat

AnimalHabitat::AnimalHabitat():land(false),water(false),flying(false){}
AnimalHabitat::AnimalHabitat(bool _land,bool _water,bool _flying):land(_land),water(_water),flying(_flying){}


bool AnimalHabitat::IsLand()	{return land;}
bool AnimalHabitat::IsWater()	{return water;}
bool AnimalHabitat::IsFlying()	{return flying;}


//AnimalClassification

AnimalClassification::AnimalClassification():family(""),genus(""),species(""){}
AnimalClassification::AnimalClassification(const char *family,const char *genus,const char *species):family(family),genus(genus),species(species){}

	//ctor here ?

const char* AnimalClassification::GetFamily()	{return family;}
const char* AnimalClassification::GetGenus()	{return genus;}
const char* AnimalClassification::GetSpecies()	{return species;}

//Animal

Animal::Animal(){};

//Land,Water,Flying,Amphibian animal is deleted

//Animal Realization classes
