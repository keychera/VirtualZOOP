class Renderable {
	public :
		virtual void Render () = 0;
};

class Animal : public Renderable {
	public :
		virtual void Interact () = 0;
};

class AnimalHabitat {
	public:
		//ctor
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
		AnimalClassification(const char *_family,const char *_genus,const char *_species);
		
		//cctor
		AnimalClassification(AnimalClassification&); 
		
		//dtor
		~AnimalClassification();
	
		//getter
		char* GetFamily();
		char* GetGenus();
		char* getSpecies();
		char* GetScientificName();
	
	protected:
		const char *family;
		const char *genus;
		const char *species;
};

public LandAnimal : public Animal, public AnimalHabitat {
	public:
		//ctor
		LandAnimal():AnimalHabitat(true,false,false);
};

public WaterAnimal : public Animal, public AnimalHabitat {
	public:
		//ctor
		WaterAnimal():AnimalHabitat(false,true,true);
};

public FlyingAnimal : public Animal, public AnimalHabitat {
	public:
		//ctor
		FlyingAnimal():AnimalHabitat(false,false,true);
};

public Amphibian : public Animal, public AnimalHabitat {
	public:
		//ctor
		Amphibian():AnimalHabitat(true,true,false);
};

//animal class list

class Cat : public LandAnimal,public AnimalClassification {
	//family Felidae
	//Felis catus
	public:
		//ctor
		Cat():AnimalClassification("Felidae","Felis","catus");
	
};

class Cheetah : public LandAnimal,public AnimalClassification {
	//family Felidae
	//Acinonyx jubatus
	
};

class Lion : public LandAnimal,public AnimalClassification {
	//family Felidae
	//Panthera leo
	
};

class Leopard : public LandAnimal,public AnimalClassification {
	//family Felidae
	//Panthera pardus
	
};

class Tiger : public LandAnimal,public AnimalClassification {
	//family Felidae
	//Panthera tigris
};

class Beluga : public WaterAnimal,public AnimalClassification {
	//family Monodontidae
	//Delphinapterus leucas
	
};

class Narwhal : public WaterAnimal,public AnimalClassification {
	//family Monodontidae
	//Monodon monoceros
	
};

class Dolphin : public WaterAnimal,public AnimalClassification {
	//family Delphinidae
	//Delphinus delphis
};

class Orca : public WaterAnimal,public AnimalClassification {
	//family Delphinidae
	//Orcinus orca
	
};

class Clownfish : public WaterAnimal,public AnimalClassification {
	//family Pomacentridae
	//Ocellaris clownfish
	
};

class Damselfish : public WaterAnimal,public AnimalClassification {
	//family Pomacentridae
	//Stegastes variabilis

};

class Coyote : public LandAnimal,public AnimalClassification {
	//family Canidae
	//Canis latrans
	
};

class Wolf : public LandAnimal,public AnimalClassification {
	//family Canidae
	//Canis Lupus
};

class RedFox : public LandAnimal,public AnimalClassification {
	//family Canidae
	//Vulpes vulpes
};

class ArcticFox : public LandAnimal,public AnimalClassification {
	//family Canidae
	//Vulpes lagopus
};

class Komodo : public LandAnimal,public AnimalClassification {
	//family Varanidae
	//Varanus komodoensis
	
};

class Biawak  : public LandAnimal,public AnimalClassification {
	//family Varanidae
	//Varanus cerambonensis
	
};

class BadakJawa : public LandAnimal,public AnimalClassification {
	//family Rhinocerotidae
	//Rhinoceros sondaicus
	
};

class BadakSumatra : public LandAnimal,public AnimalClassification {
	//family Rhinocerotidae
	//Dicerorhinus sumatrensis
	
};

class BaldEagle : public FlyingAnimal, public AnimalClassification {
	//family Accipitridae
	//Haliaeetus leucocephalus
};

class GoldenEagle : public FlyingAnimal, public AnimalClassification {
	//family Accipitridae
	//Aquila chrysaetos
};

class RedKite : public FlyingAnimal, public AnimalClassification {
	//family Accipitridae
	//Milvus milvus
};

class BlackKite : public FlyingAnimal, public AnimalClassification {
	//family Accipitridae
	//Milvus migrans
};

class Axolotl : public Amphibian,public AnimalClassification {
	//family Ambystomatidae
	//Ambystoma mexicanum
};
