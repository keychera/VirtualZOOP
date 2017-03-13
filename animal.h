/**
 * @file	location.h
 * @author	Kevin Erdiza
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for class Animal and its parent interfaces
 */

#include "location.h"
#include "renderable.h"

/**
 * @class AnimalDiet Interface
 * @brief interface for animal to have dietary properties
 * animal can have either meat diet or plant diet or both
 */
class AnimalDiet {
	public:
		/**
		 * @brief default constructor
		 * this will set weight to default value 1, and setting both diet to false
		 */
		AnimalDiet();
		
		/**
		 * @brief constructor with parameter
		 * this will set this class' attributes to the parameters given
		 */
		AnimalDiet(int weight,bool eatingMeat, bool eatingPlant);
		
		/**
		 * @brief this will return whether the animal has meatdiet or not
		 * @return bool
		 */
		bool IsCarnivore();
		
		/**
		 * @brief this will return whether the animal has plantdiet or not
		 * @return bool
		 */
		bool IsHerbivore();
		
		/**
		 * @brief this will return whether the animal has both diet or not
		 * @return bool
		 */
		bool IsOmnivore();
		
		/**
		 * @brief getter for weight
		 * @return integer
		 */
		int GetWeight();
	
	protected:
		int weight;		///< integer value for weight
		bool meatDiet;	///< bool for meat diet status
		bool plantDiet;	///< bool for plant diet status
};

/**
 *	@class AnimalTameStatus
 *	@brief interface for tame status for animals
 */
class AnimalTameStatus {
	public:
		/**
		 * @brief default constructor
		 * this will set tame status to default value true
		 */
		AnimalTameStatus();
		
		/**
		 * @brief constructor with parameter
		 * this will set tame status to the parameter given
		 */
		AnimalTameStatus(bool tameStatus);
		
		/**
		 * @brief this will return whether the animal is tame or not
		 * @return true for tame, false for not tame
		 */
		bool IsTame();
		
	protected:
		bool tame;	///< bool for tame status
};

/**
 * @class AnimalHabitat
 * @brief interface for habitat for animals,
 * that contain three bool value depicting the three habitat an animal can live:
 * Land, Water, and Flying (Air)
 */
class AnimalHabitat {
	public:
		/**
		 * @brief default constructor
		 * this will set all habitat value to default value false
		 */
		AnimalHabitat();
		
		/**
		 * @brief constructor with parameter
		 * this will set this class' attributes to the parameters given
		 */
		AnimalHabitat(bool land,bool water,bool flying);
		
		/**
		 * @brief this will return whether the animal can live on land or not
		 */
		bool IsLand();
		
		/**
		 * @brief this will return whether the animal can live in water or not
		 */
		bool IsWater();
		
		/**
		 * @brief this will return whether the animal can fly or not
		 */
		bool IsFlying();
		
	protected:
		bool land;		///< bool for land habitat
		bool water;		///< bool for water habitat
		bool flying;	///< bool for flying(air) habitat
};

/**
 * @class AnimalClassification
 * @brief interface for scientific name for animals, that contains three char* for 
 * family, genus, and species name
 */
class AnimalClassification {
	public:
		/**
		 * @brief default constructor
		 * this will set all name value to default value ""
		 */
		AnimalClassification();
		
		/**
		 * @brief constructor with parameter
		 * this will set this class' attributes to the parameters given
		 */
		AnimalClassification(const char *_family,const char *_genus,const char *_species);
		
		/**
		 * @brief this will return a char* of the family name
		 */
		const char* GetFamily();
		
		/**
		 * @brief this will return a char* of the genus name
		 */
		const char* GetGenus();
		
		/**
		 * @brief this will return a char* of the species name
		 */
		const char* GetSpecies();
	
	protected:
		const char *family;		///< literal family
		const char *genus;		///< literal genus
		const char *species;	///< literal species
};

/**
 * @class Animal
 * @brief the main base class for every animal that is being realized in this project
 * this class use all of the interface listed in animal.h and inherit Location class and abstract Renderable class
 */
class Animal : public virtual Renderable, public virtual Location, public virtual AnimalDiet, public virtual AnimalTameStatus,public virtual AnimalClassification, public virtual AnimalHabitat{
	public :
		/**
		 * @brief default constructor
		 * this will call all the default constructor for each interface
		 */
		Animal();
		
		/**
		 * @brief abstract method of Interact
		 * this will return a const char* depicting the sound of the animal (representing its interaction)
		 */
		virtual const char* Interact () = 0;
};
