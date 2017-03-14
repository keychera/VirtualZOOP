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


class Tour{
  public:
    Tour(Zoo& zoo,int entranceNum = MAXENTRANCENUMBER,int exitNum = MAXEXITNUMBER);
    
    ~Tour();
    
    int InteractAroundRoute(Location r,int dir);
    void InteractHabitat(Cell* c);
    
    void RestartRoute();
    void TraceRoute();
    void TraceWholeRoute();
    
    
    
    int GetRouteDistance();
    int GetRoutePointer();
    
    //debug
    void PrintRoute();
    
  private:
    Zoo& zoo_ref;
    Location* route;
    int route_distance;
    int route_pointer;
    
};

#endif
