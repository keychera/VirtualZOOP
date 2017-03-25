
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
abstract class Cell extends Location implements Renderable {
        /**
		 * @brief default construstor
		 * construct Renderable and Location
		 */
        public Cell();
        /**
		 * @brief construstor with parameter
		 * construct Cell and set Location(x,y)
		 */
        public Cell(int x, int y);
        /**
		 * @brief pure virtual for name getter
		 */
        abstract String GetName();
        /**
		 * @brief pure virtual for type getter
		 */
        abstract String GetType();
};
