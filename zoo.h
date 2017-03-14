#ifndef ZOO_H
#define ZOO_H
#include "cage.h"
#include <stdio.h>
#include <string.h>
#define DEFSIZE 10
/**
 * @file	zoo.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration Zoo
 */

/**
 * @class	Zoo
 * @brief	class to make a zoo include its components
 */
class Zoo {
  public:
   /**
    * @brief default construstor
    * this will set width and legth to DEFSIZE and make new Cells and Cages
    */
    Zoo();
        /**
		 * @brief construstor with parameter
		 * this will set width to w, legth to l and make new Cells and Cages
		 * @param width 
         * @param length
         */
        Zoo(int w, int l);
        /**
		 * @brief copyconstrustor
		 * this will copy all z attribute 
		 * @param Zoo
         */
        Zoo(const Zoo& z);
        /**
		 * @brief destructor
		 * this will delete Cells and Cages
		 */
        ~Zoo();
        /**
		 * @brief operator overloading
		 * this will copy all Z attributes
		 * @param Zoo
         */
        Zoo& operator= (const Zoo& Z);
        /**
		 * @brief map reader and initialize
		 * this will read txt file and initialize all its Cells
		 * @param filename
         * @return void
         */
        void ReadZoo(const char* filename);
        /**
		 * @brief width getter
		 * this will return width of the zoo
         * @return int
         */
        int GetWidth();
        /**
		 * @brief length getter
		 * this will return length of the zoo
         * @return int
         */
        int GetLength();
        /**
		 * @brief Cells getter
		 * this will return array of Cell* 
         * @return Cell*
         */
        Cell** GetCells();
        /**
		 * @brief Cages getter
		 * this will return array of Cage*
         * @return Cage**
         */
        Cage** GetCages();
        /**
		 * @brief Number of Cages getter
		 * this will return NCages of the zoo
         * @return int
         */
        int GetNCages();
        /**
		 * @brief Cell getter
		 * this will return Cell* in location(x,y) in the zoo
         * @return Cells*
         */
        Cell* AccessCell(int x,int y);
        /**
		 * @brief cage maker
		 * this will make cage from cells that has been inserted into zoo 
         * @return void
         */
        void MakeCage();
        /**
		 * @brief Cage Index getter 
		 * this will return index of cage that contains location(x,y)
         * @param x 
         * @param y
         * @return int
         */
         void ReadAnimal(const char *filename);
         void AddAnimaltoZoo(Animal* A);
        int GetIndexCage(int x,int y);
        void Print();
    
    private:
        Cell** Cells;   ///< array of Cell*
        Cage** Cages;   ///< array of Cage*
        int NCages;     ///< number of cage
        int width;      ///< zoo width
        int length;     ///< zoo length
};

#endif
