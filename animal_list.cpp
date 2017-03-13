//animal_list.cpp
#include "animal_list.h"

//Cat
	Cat::Cat():AnimalDiet(10,true,false),AnimalTameStatus(true),AnimalClassification("Felidae","Felis","catus"),AnimalHabitat(1,0,0){}
	Cat::Cat(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Felidae","Felis","catus"),AnimalHabitat(1,0,0){}

	const char* Cat::Interact (){
		return "NYAA";
	}
		
	void Cat::Render (){
			
	}

//Cheetah
	Cheetah::Cheetah():AnimalDiet(20,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Acinonyx","jubatus"),AnimalHabitat(1,0,0){}
	Cheetah::Cheetah(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Acinonyx","jubatus"),AnimalHabitat(1,0,0){}

	const char* Cheetah::Interact (){
		return "*slightly soft* RAWR";
	}
		
	void Cheetah::Render (){
			
	}
	
//Lion
	Lion::Lion():AnimalDiet(30,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Panthera","leo"),AnimalHabitat(1,0,0){}
	Lion::Lion(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Panthera","leo"),AnimalHabitat(1,0,0){}

	const char* Lion::Interact (){
		return "A PROPER RAWR";
	}
		
	void Lion::Render (){
			
	}

//Leopard
	Leopard::Leopard():AnimalDiet(20,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Panthera","pardus"),AnimalHabitat(1,0,0){}
	Leopard::Leopard(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Panthera","pardus"),AnimalHabitat(1,0,0){}

	const char* Leopard::Interact (){
		return "MAJESTIC RAWR";
	}
		
	void Leopard::Render (){
			
	}
	
//Tiger
	Tiger::Tiger():AnimalDiet(25,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Panthera","tigris"),AnimalHabitat(1,0,0){}
	Tiger::Tiger(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Felidae","Panthera","tigris"),AnimalHabitat(1,0,0){}
	
	const char* Tiger::Interact (){
		return "COURAGEOUS RAWR";
	}
		
	void Tiger::Render (){
		
	}

//Beluga
	Beluga::Beluga():AnimalDiet(50,true,false),AnimalTameStatus(true),AnimalClassification("Monodontidae","Delphinapterus","leucas"),AnimalHabitat(0,1,0){}
	Beluga::Beluga(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Monodontidae","Delphinapterus","leucas"),AnimalHabitat(0,1,0){}

	const char* Beluga::Interact (){
		return "SPLASH";
	}
		
	void Beluga::Render (){
		
	}

//Narwhal
	Narwhal::Narwhal():AnimalDiet(45,true,false),AnimalTameStatus(true),AnimalClassification("Monodontidae","Monodon","monoceros"),AnimalHabitat(0,1,0){}
	Narwhal::Narwhal(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Monodontidae","Monodon","monoceros"),AnimalHabitat(0,1,0){}

	const char* Narwhal::Interact (){
		return "NARWAL SPLASH";
	}
		
	void Narwhal::Render (){
		
	}

//Dolphin
	Dolphin::Dolphin():AnimalDiet(35,true,false),AnimalTameStatus(true),AnimalClassification("Delphinidae","Delphinus","delphis"),AnimalHabitat(0,1,0){}
	Dolphin::Dolphin(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Delphinidae","Delphinus","delphis"),AnimalHabitat(0,1,0){}
	
	const char* Dolphin::Interact (){
		return "dolphin's SKREE";
	}
		
	void Dolphin::Render (){
		
	}

//Orca
	Orca::Orca():AnimalDiet(90,true,false),AnimalTameStatus(false),AnimalClassification("Delphinidae","Orcinus","orca"),AnimalHabitat(0,1,0){}
	Orca::Orca(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Delphinidae","Orcinus","orca"),AnimalHabitat(0,1,0){}
	
	const char* Orca::Interact (){
		return "SPLASHING RAWR";
	}
		
	void Orca::Render (){
		
	}

//Clownfish
	Clownfish::Clownfish():AnimalDiet(2,true,false),AnimalTameStatus(true),AnimalClassification("Pomacentridae","Ocellaris","clownfish"),AnimalHabitat(0,1,0){}
	Clownfish::Clownfish(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Pomacentridae","Ocellaris","clownfish"),AnimalHabitat(0,1,0){}
	
	const char* Clownfish::Interact (){
		return "lil blub";
	}
		
	void Clownfish::Render (){
		
	}
	
//Damselfish
	Damselfish::Damselfish():AnimalDiet(2,true,false),AnimalTameStatus(true),AnimalClassification("Pomacentridae","Stegastes","variabilis"),AnimalHabitat(0,1,0){}
	Damselfish::Damselfish(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Pomacentridae","Stegastes","variabilis"),AnimalHabitat(0,1,0){}
	
	const char* Damselfish::Interact (){
		return "lil *majestic* blub";
	}
		
	void Damselfish::Render (){
		
	}
	
//Coyote
	Coyote::Coyote():AnimalDiet(15,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Canis","latrans"),AnimalHabitat(1,0,0){}
	Coyote::Coyote(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Canis","latrans"),AnimalHabitat(1,0,0){}
	
	const char* Coyote::Interact (){
		return "AGILE RAWR";
	}
		
	void Coyote::Render (){
		
	}
	
//Wolf
	Wolf::Wolf():AnimalDiet(20,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Canis","lupus"),AnimalHabitat(1,0,0){}
	Wolf::Wolf(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Canis","lupus"),AnimalHabitat(1,0,0){}
	
	const char* Wolf::Interact (){
		return "A STANDARD RAWR";
	}
		
	void Wolf::Render (){
		
	}
	
//RedFox
	RedFox::RedFox():AnimalDiet(20,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Vulpes","vulpes"),AnimalHabitat(1,0,0){}
	RedFox::RedFox(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Vulpes","vulpes"),AnimalHabitat(1,0,0){}
	
	const char* RedFox::Interact (){
		return "RAWR with passion";
	}
		
	void RedFox::Render (){
		
	}
	
//ArcticFox
	ArcticFox::ArcticFox():AnimalDiet(20,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Vulpes","lagopus"),AnimalHabitat(1,0,0){}
	ArcticFox::ArcticFox(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Canidae","Vulpes","lagopus"),AnimalHabitat(1,0,0){}
	
	const char* ArcticFox::Interact (){
		return "ARCTIC RAWR";
	}
		
	void ArcticFox::Render (){
		
	}
	
//Komodo
	Komodo::Komodo():AnimalDiet(40,true,false),AnimalTameStatus(false),AnimalClassification("Varanidae","Varanus","komodoensis"),AnimalHabitat(1,0,0){}
	Komodo::Komodo(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Varanidae","Varanus","komodoensis"),AnimalHabitat(1,0,0){}
	
	const char* Komodo::Interact (){
		return "HSSS";
	}
		
	void Komodo::Render (){
		
	}
	
//Biawak
	Biawak::Biawak():AnimalDiet(35,true,false),AnimalTameStatus(false),AnimalClassification("Varanidae","Varanus","cerambonensis"),AnimalHabitat(1,0,0){}
	Biawak::Biawak(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Varanidae","Varanus","cerambonensis"),AnimalHabitat(1,0,0){}
	
	const char* Biawak::Interact (){
		return "MORE TERRIFYING HSSS";
	}
		
	void Biawak::Render (){
		
	}
	
//BadakJawa
	BadakJawa::BadakJawa():AnimalDiet(70,false,true),AnimalTameStatus(true),AnimalClassification("Rhinocerotidae","Rhinoceros","sondaicus"),AnimalHabitat(1,0,0){}
	BadakJawa::BadakJawa(int weight):AnimalDiet(weight,false,true),AnimalTameStatus(true),AnimalClassification("Rhinocerotidae","Rhinoceros","sondaicus"),AnimalHabitat(1,0,0){}
	
	const char* BadakJawa::Interact (){
		return "HMM DON'T MIND ME AND MY ENDANGERED STATUS";
	}
		
	void BadakJawa::Render (){
		
	}
	
//BadakSumatra
	BadakSumatra::BadakSumatra():AnimalDiet(65,false,true),AnimalTameStatus(true),AnimalClassification("Rhinocerotidae","Dicerorhinus","sumatrensis"),AnimalHabitat(1,0,0){}
	BadakSumatra::BadakSumatra(int weight):AnimalDiet(weight,false,true),AnimalTameStatus(true),AnimalClassification("Rhinocerotidae","Dicerorhinus","sumatrensis"),AnimalHabitat(1,0,0){}
	
	const char* BadakSumatra::Interact (){
		return "IM WITH JAWA";
	}
		
	void BadakSumatra::Render (){
		
	}
	
//BaldEagle
	BaldEagle::BaldEagle():AnimalDiet(30,true,false),AnimalTameStatus(false),AnimalClassification("Accipitridae","Haliaeetus","leucocephalus"),AnimalHabitat(0,0,1){}
	BaldEagle::BaldEagle(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Accipitridae","Haliaeetus","leucocephalus"),AnimalHabitat(0,0,1){}
	
	const char* BaldEagle::Interact (){
		return "BAWK";
	}
		
	void BaldEagle::Render (){
		
	}
	
//GoldenEagle
	GoldenEagle::GoldenEagle():AnimalDiet(25,true,false),AnimalTameStatus(false),AnimalClassification("Accipitridae","Aquila","chrysaetos"),AnimalHabitat(0,0,1){}
	GoldenEagle::GoldenEagle(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(false),AnimalClassification("Accipitridae","Aquila","chrysaetos"),AnimalHabitat(0,0,1){}
	
	const char* GoldenEagle::Interact (){
		return "GOLDEN BAWK";
	}
		
	void GoldenEagle::Render (){
		
	}
	
//RedKite
	RedKite::RedKite():AnimalDiet(10,true,false),AnimalTameStatus(true),AnimalClassification("Accipitridae","Milvus","milvus"),AnimalHabitat(0,0,1){}
	RedKite::RedKite(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Accipitridae","Milvus","milvus"),AnimalHabitat(0,0,1){}
	
	const char* RedKite::Interact (){
		return "flip flop";
	}
		
	void RedKite::Render (){
		
	}
	
//BlackKite
	BlackKite::BlackKite():AnimalDiet(10,true,false),AnimalTameStatus(true),AnimalClassification("Accipitridae","Milvus","migrans"),AnimalHabitat(0,0,1){}
	BlackKite::BlackKite(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Accipitridae","Milvus","migrans"),AnimalHabitat(0,0,1){}
	
	const char* BlackKite::Interact (){
		return "dark flip flop";
	}
		
	void BlackKite::Render (){
		
	}
	
//Axolotl
	Axolotl::Axolotl():AnimalDiet(5,true,false),AnimalTameStatus(true),AnimalClassification("Ambystomatidae","Ambystoma","mexicanum"),AnimalHabitat(1,1,0){}
	Axolotl::Axolotl(int weight):AnimalDiet(weight,true,false),AnimalTameStatus(true),AnimalClassification("Ambystomatidae","Ambystoma","mexicanum"),AnimalHabitat(1,1,0){}
	
	const char* Axolotl::Interact (){
		return "a rare blub";
	}
		
	void Axolotl::Render (){
		
	}
