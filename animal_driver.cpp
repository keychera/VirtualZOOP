//animaldriver.cpp

#include "animal.h"
#include <iostream>
using namespace std;

void Identify(Animal& a);

int main (int argc, char *argv[]){
	Cat neko;
	Identify(neko);
	
	return 0;
}

void Identify(Animal& a){
	cout << "Family  : " << a.GetFamily() << endl;
	cout << "Species : " << a.GetGenus() << " " << a.GetSpecies() << endl;
	
	cout << "Habitat :" ; 
	if (a.IsLand()) cout << " Land";
	if (a.IsWater()) cout << " Water";
	if (a.IsFlying()) cout << " Flying";
	cout << endl;
	
	cout << "Tame? " ;
	if (a.IsTame()) cout << "Yes"; else cout << "No";
	cout << endl;
	
	cout << "Diet : " ;
	if (a.IsOmnivore())
		cout << "Omnivore";
	else if (a.IsCarnivore())
		cout << "Carnivore";
	else
		cout << "Herbivore";
	
	cout << endl;
	
	cout << "Let's interact with it!" << endl;
	cout << " *" << a.Interact() << endl;
}
