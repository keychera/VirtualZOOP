#ifndef FACILITY_H
#define FACILITY_H
#include "cell.h"
/**
 * @file	facility.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration facility
 */

/**
 * @class	Facility
 * @brief	acstract class of Facility as one of Cell type
 */
class Facility:public Cell{
  public:
   /**
    * @brief default construstor
    * construct Cell
    */
    Facility();
   /**
    * @brief pure virtual function getter for type
    */
    virtual char* GetType()=0;
   /**
    * @brief name getter
    * this will return "facility"
    * @return char*
    */
    char* GetName();
};

/**
 * @class	Road
 * @brief	class to define Facility as Road
 */
class Road: public Facility{
  public:
   /**
    * @brief default constructor
    * construct Facility
    */
    Road();
   /**
    * @brief virtual function of type getter
    * this will return "Road"
    * @return char*
    */
    virtual char* GetType();  
   /**
    * @brief virtual fuction to print 
    * this will return " "
    * @return void
    */
    virtual void Render();
};

/**
 * @class	Entrance
 * @brief	class to define Road as Entrance
 */
class Entrance: public Road{
  public:
   /**
    * @brief default constructor
    * construct Road
    */
    Entrance()
   /**
    * @brief function of type getter
    * this will return "Entrance"
    * @return char*
    */
    char* GetType();
   /**
    * @brief fuction to print 
    * this will return "E"
    * @return void
    */
    void Render();
};

/**
 * @class	Exit
 * @brief	class to define Road as Exit
 */
class Exit: public Road{
  public:
   /**
    * @brief default constructor
    * construct Road
    */
     Exit();
   /**
    * @brief fuction to print 
    * this will return "@"
    * @return void
    */
     void Render();
   /**
    * @brief function of type getter
    * this will return "Exit"
    * @return char*
		 */
     char* GetType();
};
/**
 * @class	Restaurant
 * @brief	class to define Facility as Restaurant
 */
class Restaurant: public Facility{
  public:
   /**
    * @brief default constructor
    * construct Facility
    */
    Restaurant();
        /**
	* @brief fuction to print 
	* this will return "R"
        * @return void
		 */
     void Render();
        /**
	* @brief function of type getter
	* this will return "Restaurant"
        * @return char*
		 */
     char* GetType();
};
/**
 * @class	Park
 * @brief	class to define Facility as Park
 */
class Park: public Facility{
  public:
        /**
	* @brief default constructor
	* construct Facility
	*/
    Park();
        /**
	* @brief fuction to print 
	* this will return "P"
        * @return void
	*/
    void Render();
        /**
	* @brief function of type getter
	* this will return "Park"
        * @return char*
	*/
    char* GetType();
};

#endif
