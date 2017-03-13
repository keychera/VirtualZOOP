/**
 * @file	cell.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for Cell
 */

#include "animal.h"
#include <iostream>
using namespace std;

/**
 * @class Cell
 * @brief an abstract class representing single area of the zee that can be habitats for animal or facilities
 */
class Cell: public Renderable, public Location{
    public:
		/**
		 * @brief default constructor
		 * 	this will set cell's location to x = 0, y = 0
		 */
        Cell();
        /**
		 * @brief constructor with parameter
		 * 	this will create cell's location to x,y
		 * @param x
		 * @param y
		 */
        Cell(int x, int y);
};
