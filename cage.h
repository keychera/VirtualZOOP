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
 * @class	Location
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
        int getSize();
        /**
		 * @brief getter area
         * @return Location*
		 */
        Location* getArea();
        /**
		 * @brief cage's animals movement manager
		 * this will change animal in cage position
         * @return void
		 */
        void MovementManager();
        /**
		 * @brief function to get location after animal A move 
		 * this will return location for 1:move up, 2:move right, 3:move down, 4:move left
         * @return Location
		 */
        Location move(Animal* A,int i);
        /**
		 * @brief check location from animal
		 * this will check if there's animal in location L
         * @param Location
         * @return bool
		 */
        bool isThereAnimal(Location& L);
        /**
		 * @brief check location in cage
		 * this will check if location L is inside cage
         * @param Location
         * @return bool
		 */
        bool isInCage(Location& L);
        /**
		 * @brief void to add animal to cage
         * @param Animal*
         * @return void 
		 */
        void AddAnimal(Animal* A);
        Animal** getAnimals();
        int getNAnimal();
        const char* getHabitat();
    private:
        Animal** Animals;
        int NAnimal;
        const char* habitat;
        const int size;
        Location* area;
};
#endif