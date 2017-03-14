#ifndef HABITAT_H
#define HABITAT_H
#include "cell.h"
/**
 * @file	habitat.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration Habitat
 */

/**
 * @class	Habitat
 * @brief	acstract class of Habitat as one of Cell
 */
class Habitat: public Cell{
    public:
        /**
		 * @brief default construstor
		 * this will construct Cell
		 */
        Habitat();
        /**
		 * @brief name getter
		 * this will return "habitat"
         * @return char*
		 */
        char* GetName();
        /**
		 * @brief pure virtual function for type getter
		 */
        virtual char* GetType()=0;
};
/**
 * @class	LandHabitat
 * @brief	class to define Habitat as LandHabitat
 */
class LandHabitat: public Habitat{
    public:
        /**
		 * @brief default construstor
		 * this will construct Habitat
		 */
        LandHabitat();
        /**
		 * @brief fuction to print 
		 * this will return "l"
         * @return void
		 */
        void Render();
        /**
		 * @brief type getter 
		 * this will return "LandHabitat"
         * @return char*
		 */
        char* GetType();
};
/**
 * @class	WaterHabitat
 * @brief	class to define Habitat as WaterHabitat
 */
class WaterHabitat: public Habitat{
    public:
        /**
		 * @brief default construstor
		 * this will construct Habitat
		 */
        WaterHabitat();
        /**
		 * @brief fuction to print 
		 * this will return "w"
         * @return void
		 */
        void Render();
        /**
		 * @brief type getter 
		 * this will return "WaterHabitat"
         * @return char*
		 */
        char* GetType();
};
/**
 * @class	AirHabitat
 * @brief	class to define Habitat as AirHabitat
 */
class AirHabitat: public Habitat{
    public:
        /**
		 * @brief default construstor
		 * this will construct Habitat
		 */
        AirHabitat();
        /**
		 * @brief fuction to print 
		 * this will return "a"
         * @return void
		 */
        void Render();
        /**
		 * @brief type getter 
		 * this will return "AirHabitat"
         * @return char*
		 */
        char* GetType();
};
#endif