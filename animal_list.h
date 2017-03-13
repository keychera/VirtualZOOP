//animal class list

#include "animal.h"

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

class Cheetah : public virtual Animal {
	//family Felidae
	//Acinonyx jubatus
	public:
		Cheetah();
		Cheetah(int weight);
		const char* Interact ();
		void Render ();
	
};

class Lion : public virtual Animal {
	//family Felidae
	//Panthera leo
	public:
		Lion();
		Lion(int weight);
		const char* Interact ();
		void Render ();
};

class Leopard : public virtual Animal {
	//family Felidae
	//Panthera pardus
	public:
		Leopard();
		Leopard(int weight);
		const char* Interact ();
		void Render ();
};

class Tiger : public virtual Animal {
	//family Felidae
	//Panthera tigris
	public:
		Tiger();
		Tiger(int weight);
		const char* Interact ();
		void Render ();
};

class Beluga : public virtual Animal {
	//family Monodontidae
	//Delphinapterus leucas
	public:
		Beluga();
		Beluga(int weight);
		const char* Interact ();
		void Render ();
	
};

class Narwhal : public virtual Animal {
	//family Monodontidae
	//Monodon monoceros
	public:
		Narwhal();
		Narwhal(int weight);
		const char* Interact ();
		void Render ();
};

class Dolphin : public virtual Animal {
	//family Delphinidae
	//Delphinus delphis
	public:
		Dolphin();
		Dolphin(int weight);
		const char* Interact ();
		void Render ();
};

class Orca : public virtual Animal {
	//family Delphinidae
	//Orcinus orca
	public:
		Orca();
		Orca(int weight);
		const char* Interact ();
		void Render ();
};

class Clownfish : public virtual Animal {
	//family Pomacentridae
	//Ocellaris clownfish
	public:
		Clownfish();
		Clownfish(int weight);
		const char* Interact ();
		void Render ();
};

class Damselfish : public virtual Animal {
	//family Pomacentridae
	//Stegastes variabilis
	public:
		Damselfish();
		Damselfish(int weight);
		const char* Interact ();
		void Render ();
};

class Coyote : public virtual Animal {
	//family Canidae
	//Canis latrans
	public:
		Coyote();
		Coyote(int weight);
		const char* Interact ();
		void Render ();
};

class Wolf : public virtual Animal {
	//family Canidae
	//Canis Lupus
	public:
		Wolf();
		Wolf(int weight);
		const char* Interact ();
		void Render ();
};

class RedFox : public virtual Animal {
	//family Canidae
	//Vulpes vulpes
	public:
		RedFox();
		RedFox(int weight);
		const char* Interact ();
		void Render ();
};

class ArcticFox : public virtual Animal {
	//family Canidae
	//Vulpes lagopus
	public:
		ArcticFox();
		ArcticFox(int weight);
		const char* Interact ();
		void Render ();
};

class Komodo : public virtual Animal {
	//family Varanidae
	//Varanus komodoensis
	public:
		Komodo();
		Komodo(int weight);
		const char* Interact ();
		void Render ();
};

class Biawak : public virtual Animal {
	//family Varanidae
	//Varanus cerambonensis
	public:
		Biawak();
		Biawak(int weight);
		const char* Interact ();
		void Render ();
};

class BadakJawa : public virtual Animal {
	//family Rhinocerotidae
	//Rhinoceros sondaicus
	public:
		BadakJawa();
		BadakJawa(int weight);
		const char* Interact ();
		void Render ();
};

class BadakSumatra : public virtual Animal {
	//family Rhinocerotidae
	//Dicerorhinus sumatrensis
	public:
		BadakSumatra();
		BadakSumatra(int weight);
		const char* Interact ();
		void Render ();
};

class BaldEagle : public virtual Animal {
	//family Accipitridae
	//Haliaeetus leucocephalus
	public:
		BaldEagle();
		BaldEagle(int weight);
		const char* Interact ();
		void Render ();
};

class GoldenEagle : public virtual Animal {
	//family Accipitridae
	//Aquila chrysaetos
	public:
		GoldenEagle();
		GoldenEagle(int weight);
		const char* Interact ();
		void Render ();
};

class RedKite : public virtual Animal {
	//family Accipitridae
	//Milvus milvus
	public:
		RedKite();
		RedKite(int weight);
		const char* Interact ();
		void Render ();
};

class BlackKite : public virtual Animal {
	//family Accipitridae
	//Milvus migrans
	public:
		BlackKite();
		BlackKite(int weight);
		const char* Interact ();
		void Render ();
};

class Axolotl : public virtual Animal {
	//family Ambystomatidae
	//Ambystoma mexicanum
	public:
		Axolotl();
		Axolotl(int weight);
		const char* Interact ();
		void Render ();
};


