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
