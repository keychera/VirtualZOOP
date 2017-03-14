#ifndef CAGE_H
#define CAGE_H
#include "facility.h"
#include "habitat.h"
#include <iostream>
/**
 * @file	cage.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for Cage
 */

/**
 * @class	Cage
 * @brief	class to define cage for a defined size of cells in a zoo
 */
using namespace  std;
class Cage{
    public:
        /**
		 * @brief default construstor
		 * this will set size, NAnimal, Animals, and area to 0 and habitat to ""
		 */
        Cage();
        /**
		 * @brief construstor with parameter
		 * this will set NAnimal to 0, size to _size, habitat to hab, Animals and area
         * @param habitat
         * @param size
		 */
        Cage(char* hab, int size);
        /**
		 * @brief destructor
		 * delete Animals(array of Animal*) and area(array of Location*)
		 */
        ~Cage();
        /**
		 * @brief copy constructor
		 * tcopy all attributes
         * @param Cage
		 */
        Cage(const Cage& C);
        /**
		 * @brief operator overloading
		 * this will set NAnimal to 0, size to _size, habitat to hab, Animals and area
         * @param Cage
		 */
        Cage& operator=(const Cage&);
        /**
		 * @brief getter for size
         * @return int
		 */
        int GetSize();
        /**
		 * @brief getter area
         * @return Location*
		 */
        Location* GetArea();
        /**
		 * @brief cage's animals Movement manager
		 * this will change animal in cage position
         * @return void
		 */
        void MovementManager();
        /**
		 * @brief function to get location after animal A Move 
		 * this will return location for 1:Move up, 2:Move right, 3:Move down, 4:Move left
         * @return Location
		 */
        Location Move(Animal* A,int i);
        /**
		 * @brief check location from animal
		 * this will check if there's animal in location L
         * @param Location
         * @return bool
		 */
        bool IsThereAnimal(Location& L);
        /**
		 * @brief check location in cage
		 * this will check if location L is inside cage
         * @param Location
         * @return bool
		 */
        bool IsInCage(Location& L);
        /**
		 * @brief void to add animal to cage
         * @param Animal*
         * @return void 
		 */
        void AddAnimal(Animal* A);
        /**
		 * @brief getter untul Animals
         * @return Animal**
		 */
        Animal** GetAnimals();
        /**
		 * @brief getter untul NAnimal
         * @return int
		 */
        int GetNAnimal();
        /**
		 * @brief getter untul habitat
         * @return const char*
		 */
        const char* GetHabitat();
    private:
        Animal** Animals;       ///< array of Animal* in Cage
        int NAnimal;            ///< number of Animal in Cage
        const char* habitat;    ///< habitat of the Cage
        const int size;         ///< size of Cage
        Location* area;         ///< array of Location of Cage
};
#endif