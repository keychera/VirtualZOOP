#ifndef CELL_H
#define CELL_H
#include "animal_list.h"
#include <iostream>
using namespace std;
/**
 * @file	cell.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration cell
 */

/**
 * @class	Cell
 * @brief	acstract class of Cell as a component of the zoo
 */
class Cell: public Renderable, public Location{
    public:
        /**
		 * @brief default construstor
		 * construct Renderable and Location
		 */
        Cell();
        /**
		 * @brief construstor with parameter
		 * construct Cell and set Location(x,y)
		 */
        Cell(int x, int y);
        /**
		 * @brief pure virtual for name getter
		 */
        virtual char* GetName()=0;
        /**
		 * @brief pure virtual for type getter
		 */
        virtual char* GetType()=0;
};
#endif