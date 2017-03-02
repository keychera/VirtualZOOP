#include "location.h"
#include "renderable.h"


class AnimalDiet {
	public:
		//ctor
		AnimalDiet();
		AnimalDiet(int weight,bool eatingMeat, bool eatingPlant);
		
		//getter
		bool isCarnivore();
		bool isHerbivore();
		bool isOmnivore();
	
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
		bool isTame();
		
	protected:
		bool tame;
};

class AnimalHabitat {
	public:
		//ctor
		AnimalHabitat();
		AnimalHabitat(bool land,bool water,bool flying);
		
		//getter
		bool isLand();
		bool isWater();
		bool isFlying();
		
	protected:
		bool Land;
		bool Water;
		bool Flying;
};

class AnimalClassification {
	public:
		//ctor
		AnimalClassification();
		AnimalClassification(const char *_family,const char *_genus,const char *_species);
		
		//cctor
		AnimalClassification(const AnimalClassification&); 
		
		//dtor
		~AnimalClassification();
	
		//getter
		char* GetFamily();
		char* GetGenus();
		char* GetSpecies();
		char* GetScientificName();
	
	protected:
		const char *family;
		const char *genus;
		const char *species;
};

class Animal : public virtual Renderable, public virtual Location, public virtual AnimalDiet, public virtual AnimalTameStatus,public virtual AnimalClassification{
	public :
		Animal();
		virtual void Interact () = 0;
};

class LandAnimal : public virtual Animal, public AnimalHabitat {
	public:
		//ctor
		LandAnimal():AnimalHabitat(true,false,false){};
};

class WaterAnimal : public virtual Animal, public AnimalHabitat {
	public:
		//ctor
		WaterAnimal():AnimalHabitat(false,true,true){};
};

class FlyingAnimal : public virtual Animal, public AnimalHabitat {
	public:
		//ctor
		FlyingAnimal():AnimalHabitat(false,false,true){};
};

class Amphibian : public virtual Animal, public AnimalHabitat {
	public:
		//ctor
		Amphibian():AnimalHabitat(true,true,false){};
};

//animal class list

class Cat : public virtual LandAnimal {
	//family Felidae
	//Felis catus
	public:
		//ctor
		Cat():AnimalDiet(10,true,false),AnimalTameStatus(true),AnimalClassification("Felidae","Felis","catus"){};
		Cat(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Felidae","Felis","catus"){};
	
};

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
