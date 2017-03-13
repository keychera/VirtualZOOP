#include "location.h"
#include "renderable.h"


class AnimalDiet {
	public:
		//ctor
		AnimalDiet();
		AnimalDiet(int weight,bool eatingMeat, bool eatingPlant);
		
		//getter
		bool IsCarnivore();
		bool IsHerbivore();
		bool IsOmnivore();
	
	protected:
		int weight;
		bool meatDiet;
		bool plantDiet;
};

class AnimalTameStatus {
	public:
		//ctor
		AnimalTameStatus();
		AnimalTameStatus(bool tameStatus);
		
		//getter
		bool IsTame();
		
	protected:
		bool tame;
};

class AnimalHabitat {
	public:
		//ctor
		AnimalHabitat();
		AnimalHabitat(bool land,bool water,bool flying);
		//getter
		bool IsLand();
		bool IsWater();
		bool IsFlying();
		
	protected:
		bool land;
		bool water;
		bool flying;
};

class AnimalClassification {
	public:
		//ctor
		AnimalClassification();
		AnimalClassification(const char *_family,const char *_genus,const char *_species);
		
		//cctor
		//AnimalClassification(const AnimalClassification&); 
		
		//dtor
		//~AnimalClassification();
	
		//getter
		const char* GetFamily();
		const char* GetGenus();
		const char* GetSpecies();
	
	protected:
		const char *family;
		const char *genus;
		const char *species;
};

class Animal : public virtual Renderable, public virtual Location, public virtual AnimalDiet, public virtual AnimalTameStatus,public virtual AnimalClassification, public virtual AnimalHabitat{
	public :
		Animal();
		virtual const char* Interact () = 0;
};

//animal class list

class Cat : public virtual Animal {
	//family Felidae
	//Felis catus
	public:
		//ctor
		Cat();
		Cat(int weight);
		const char* Interact ();
		void Render ();
};
/*
class Cheetah : public LandAnimal {
	//family Felidae
	//Acinonyx jubatus
	
};

class Lion : public LandAnimal {
	//family Felidae
	//Panthera leo
	
};

class Leopard : public LandAnimal {
	//family Felidae
	//Panthera pardus
	
};

class Tiger : public LandAnimal {
	//family Felidae
	//Panthera tigris
};

class Beluga : public WaterAnimal {
	//family Monodontidae
	//Delphinapterus leucas
	
};

class Narwhal : public WaterAnimal {
	//family Monodontidae
	//Monodon monoceros
	
};

class Dolphin : public WaterAnimal {
	//family Delphinidae
	//Delphinus delphis
};

class Orca : public WaterAnimal {
	//family Delphinidae
	//Orcinus orca
	
};

class Clownfish : public WaterAnimal {
	//family Pomacentridae
	//Ocellaris clownfish
	
};

class Damselfish : public WaterAnimal {
	//family Pomacentridae
	//Stegastes variabilis

};

class Coyote : public LandAnimal {
	//family Canidae
	//Canis latrans
	
};

class Wolf : public LandAnimal {
	//family Canidae
	//Canis Lupus
};

class RedFox : public LandAnimal {
	//family Canidae
	//Vulpes vulpes
};

class ArcticFox : public LandAnimal {
	//family Canidae
	//Vulpes lagopus
};

class Komodo : public LandAnimal {
	//family Varanidae
	//Varanus komodoensis
	
};

class Biawak : public LandAnimal {
	//family Varanidae
	//Varanus cerambonensis
	
};

class BadakJawa : public LandAnimal {
	//family Rhinocerotidae
	//Rhinoceros sondaicus
	
};

class BadakSumatra : public LandAnimal {
	//family Rhinocerotidae
	//Dicerorhinus sumatrensis
	
};

class BaldEagle : public FlyingAnimal {
	//family Accipitridae
	//Haliaeetus leucocephalus
};

class GoldenEagle : public FlyingAnimal {
	//family Accipitridae
	//Aquila chrysaetos
};

class RedKite : public FlyingAnimal {
	//family Accipitridae
	//Milvus milvus
};

class BlackKite : public FlyingAnimal {
	//family Accipitridae
	//Milvus migrans
};

class Axolotl : public Amphibian {
	//family Ambystomatidae
	//Ambystoma mexicanum
};
*/
