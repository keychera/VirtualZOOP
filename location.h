/**
 * @file	location.h
 * @author	Kevin Erdiza
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for Location interface
 */

/**
 * @class	Location
 * @brief	class interface for objects that has 2 dimensional integer location value
 */
class Location {
	public :
		/**
		 * @brief default construstor
		 * this will set x and y to 0
		 */
		Location();
		/**
		 * @brief constructor with parameter
		 * @param x
		 * @param y
		 * this will set x and y to the given parameters
		 */
		Location(int,int);

		/**
		 * @brief getter for X value
		 * @return integer
		 */
		int getX();
		/**
		 * @brief getter for Y value
		 * @return integer
		 */
		int getY();
		/**
		 * @brief setter for X value
		 * @param x
		 * @return void
		 */
		void setX(int);
		/**
		 * @brief setter for Y value
		 * @param y
		 * @return void
		 */
		void setY(int);
	private :
		int x;	///< the x integer value of the location
		int y;	///< the y integer value of the location
};
