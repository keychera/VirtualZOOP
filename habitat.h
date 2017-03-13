/**
 * @file	habitat.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for Habitat and its derivation
 */

#include "cell.h"

/**
 * @class	Habitat
 * @brief	the abstract class for Habitat entities, derived from Cell class
 */
class Habitat: public Cell{
    public:
		/**
		 * @brief default constructor
		 * does nothing
		 */
        Habitat();
        /**
		 * @brief abstract method for gethabitat
		 * @return a const char* of the habitat name ("LandHabitat","WaterHabitat","AirHabitat")
		 */
        virtual const char* gethabitat()=0;
};

/**
 * @class LandHabitat
 * @brief realization of land habitat
 */
class LandHabitat: public Habitat{
    public:
		/**
		 * @brief default constructor
		 * does nothing
		 */
        LandHabitat();
        
        //LandHabitat(const LandHabitat& L);
        //~LandHabitat();
        //LandHabitat& operator=(const LandHabitat& L);
        
        /**
         * @brief overriden render method
         * this will print a character that represent the class
         * the character representing this class follows the project convention
         */
        void render();
        
         /**
          * @brief override getHabitat method
          * @return literal "LandHabitat"
          */
        const char* gethabitat();
        
    private:
        const char* habitat="LandHabitat"; ///< the literal "LandHabitat"
};

/**
 * @class WaterHabitat
 * @brief realization of water habitat
 */
class WaterHabitat: public Habitat{
    public:
		/**
		 * @brief default constructor
		 * does nothing
		 */
        WaterHabitat();
        /*
        WaterHabitat(const WaterHabitat& W);
        ~WaterHabitat();
        WaterHabitat& operator= (const WaterHabitat& W);*/
        
         /**
         * @brief overriden render method
         * this will print a character that represent the class
         * the character representing this class follows the project convention
         */
        void render();
        
        /**
          * @brief override getHabitat method
          * @return literal "WaterHabitat"
          */
        const char* gethabitat();
    private:
        const char* habitat="WaterHabitat"; ///< the literal "WaterHabitat"
};

/**
 * @class AirHabitat
 * @brief realization of air habitat
 */
class AirHabitat: public Habitat{
    public:
		/**
		 * @brief default constructor
		 * does nothing
		 */
        AirHabitat();
        //AirHabitat(const AirHabitat& A);
        //~AirHabitat();
        //AirHabitat& operator= (const WaterHabitat& A);
        
         /**
         * @brief overriden render method
         * this will print a character that represent the class
         * the character representing this class follows the project convention
         */
        void render();
        
        /**
          * @brief override getHabitat method
          * @return literal "AirHabitat"
          */
        const char* gethabitat();
    private:
        const char* habitat="AirHabitat"; ///< the literal "AirHabitat"
};
