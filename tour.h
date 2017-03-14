#ifndef TOUR_H
#define TOUR_H

/**
 * @file	tour.h
 * @author	Kevin Erdiza
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for class Tour
 */
 
#include "location.h"
#include "zoo.h"

#define MAXENTRANCENUMBER 10
#define MAXEXITNUMBER 10

/**
 * @class	Tour
 * @brief	class to make tour in zoo
 */
class Tour{
  public:
   /**
    * @brief construstor with parameter
    * this will set entranceNum, exitNum, cells,  make route by pathfinding
	* @param zoo
	* @param entranceNum
	* @param exitNum
    */
    Tour(Zoo& zoo,int entranceNum = MAXENTRANCENUMBER,int exitNum = MAXEXITNUMBER);
   /**
    * @brief destructor
    * this will delete route
    */
    ~Tour();
   /**
    * @brief return interact index while touring
    * this will return int and interaction as output_iterator
	* @param r
	* @param dir
	* @return int
    */
    int InteractAroundRoute(Location r,int dir);
   /**
    * @brief void to interact with habitat (showing animal spec)
    * this will print genus, species, and interaction
	* @param cells
	* @return void
    */
    void InteractHabitat(Cell* c);
   /**
    * @brief void to restart tour
    * this will set route pointer to 0
	* @return void
    */
    void RestartRoute();
   /**
    * @brief route tracer
    * this will set next route
	* @return void
    */
    void TraceRoute();
   /**
    * @brief whole route tracer
    * this will trace all route until route_pointer=route_distance
	* @return void
    */
    void TraceWholeRoute();
   /**
    * @brief route distance getter
    * @return int
    */
    int GetRouteDistance();
   /**
    * @brief route pointer getter
    * @return int
    */
    int GetRoutePointer();
    
    //debug
   /**
    * @brief print route for debug
    * @return void
    */
    void PrintRoute();
    
  private:
    Zoo& zoo_ref;		///< Zoo for touring
    Location* route;	///< array of location as route 
    int route_distance;	///< route distance
    int route_pointer;  ///< route pointer
    
};

#endif
