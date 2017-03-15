//tour.cpp

#include "tour.h"
#include "queue.h"
#include "path_struct.h"

#include <assert.h>
#include <iostream>
using namespace std;

Tour::Tour(Zoo& zoo,int entranceNum,int exitNum):zoo_ref(zoo){
  //preparing pointers to read and some useful info from Zoo
  Cell** cells = zoo.GetCells();
  int width = zoo.GetWidth();
  int length = zoo.GetLength();
  
  //search Entrance, assume that there is at least one Entrances
  //and below MAXENTRANCENUMBER
  Location entranceLoc[MAXENTRANCENUMBER];
  int i = 0,enNum = 0;
  while ((i < width * length) && (entranceNum >= 0)) {
    if (strcmp(cells[i]->GetType(),"Entrance") != 0) {
      i++;
    } else {
      entranceNum--;
      entranceLoc[enNum].SetXY(cells[i]->GetX(),cells[i]->GetY());
      enNum++;
      if (entranceNum >= 0) i++;
    }
  }
  
  //search Entrance, assume that there is at least one Entrances
  //and below MAXENTRANCENUMBER
  Location exitLoc[MAXEXITNUMBER];
  i = 0;
  int exNum = 0;
  while ((i < width * length) && (exitNum >= 0)) {
    if (strcmp(cells[i]->GetType(),"Exit") != 0) {
      i++;
    } else {
      exitNum--;
      exitLoc[exNum].SetXY(cells[i]->GetX(),cells[i]->GetY());
      exNum++;
      if (exitNum >= 0) i++;
    }
  }
  
  //randomly choose exit and entrance
  int random = 0; //randomize this
  Cell* cell_pointer = zoo.AccessCell(entranceLoc[random].GetX(),entranceLoc[random].GetY());
  Cell* exit_pointer = zoo.AccessCell(exitLoc[random].GetX(),exitLoc[random].GetY());
  
  
  //SAMPLE ALGORITHM FROM https://en.wikipedia.org/wiki/Pathfinding
    
  
  
  //add target location to main queue
  Path target = {exit_pointer->GetX(),exit_pointer->GetY(),0};
  Path entrance;
  Queue<Path> main_queue(width*length*4);
  main_queue.Enqueue(target);
  
  //loop this
  int level,iteration = 0;
  do{
    iteration++;    
    Path check = main_queue.Peek(iteration-1);
    level = check.counter + 1;
    //create separate list containing adjacent cells
    Queue<Path> check_queue(4);
    Path c1 = {check.x,check.y+1,level};
    Path c2 = {check.x+1,check.y,level};
    Path c3 = {check.x-1,check.y,level};
    Path c4 = {check.x,check.y-1,level};
    if (c1.y < length)  check_queue.Enqueue(c1);
    if (c2.x < width) check_queue.Enqueue(c2);
    if (c3.x >= 0) check_queue.Enqueue(c3);
    if (c4.y >= 0) check_queue.Enqueue(c4);
    //check the list and add to main list IF
      //1. it is road
      //2. it is not in the main list
    int num = check_queue.ElementCount();
    for(int i = 0; i < num;i++){
      Path checking = check_queue.Dequeue();
      Cell* cellcheck = zoo.AccessCell(checking.x,checking.y);
      if ((strcmp(cellcheck->GetType(),"Road") == 0) || (strcmp(cellcheck->GetType(),"Entrance") == 0)){
        bool isOnMain = false;
        int traverse = 0;
        while (traverse <= level) {
          Path searchMain = {checking.x,checking.y,traverse};
          isOnMain |= (main_queue.IdxSearch(searchMain) >= 0);
          traverse++;
        }
        if (!isOnMain)
          main_queue.Enqueue(checking);
      }
    }
    entrance = (Path) {cell_pointer->GetX(),cell_pointer->GetY(),level};
    
  } while ((main_queue.IdxSearch(entrance) == -1) && (iteration < width*length*4));
  
  //the resulting queue is accessed in reverse
  
  route_distance = level;
  route = new Location [level];
  iteration = level;
  Path start = main_queue.PeekTail();
  do{
    route[level-iteration].SetX(start.x);
    route[level-iteration].SetY(start.y);
    Queue<Path> traverse_queue(4);
    int c1 = -1;
    for(int i = iteration; i >= 0; i--){
      Path key = {start.x,start.y+1,i};
      if (main_queue.IdxSearch(key) != -1) 
        c1 = main_queue.IdxSearch(key);
    }
    int c2 = -1;
    for(int i = iteration; i >= 0; i--){
      Path key = {start.x+1,start.y,i};
      if (main_queue.IdxSearch(key) != -1) 
        c2 = main_queue.IdxSearch(key);
    }
    int c3 = -1;
    for(int i = iteration; i >= 0; i--){
      Path key = {start.x-1,start.y,i};
      if (main_queue.IdxSearch(key) != -1) 
        c3 = main_queue.IdxSearch(key);
    }
    int c4 = -1;
    for(int i = iteration; i >= 0; i--){
      Path key = {start.x,start.y-1,i};
      if (main_queue.IdxSearch(key) != -1) 
        c4 = main_queue.IdxSearch(key);
    }
    
    if (c1 >= 0)  traverse_queue.Enqueue(main_queue.Peek(c1));
    if (c2 >= 0) traverse_queue.Enqueue(main_queue.Peek(c2));
    if (c3 >= 0) traverse_queue.Enqueue(main_queue.Peek(c3));
    if (c4 >= 0) traverse_queue.Enqueue(main_queue.Peek(c4));
    
    start = traverse_queue.Dequeue();
    for(int i = 1;i < traverse_queue.ElementCount();i++){
      Path check = traverse_queue.Dequeue();
      if (start > check)
        start = check;
    }
    iteration--;
  }while (iteration >= 0);
  
  route[0] = entranceLoc[random];
  route[level-1] = exitLoc[random];
  
  
  route_pointer = 0;
}

Tour::~Tour(){
  if (route_distance != 0)
    delete [] route;
}

int Tour::InteractAroundRoute(Location r,int dir){
  //dir convention
  // 1 : down, 2 : right, 3 left, 4 : up
  //return convention
  // 1 : land, 2 : water, 3 : air, 4 : restaurant, 5 :park
  int out = 0;
  Cell* interacted;
  const char* directions[] = {"south","east","west","north"};
  switch (dir) {
    case 1:
      interacted = zoo_ref.AccessCell(r.GetX(),r.GetY()+1);
      break;
    case 2:
      interacted = zoo_ref.AccessCell(r.GetX()+1,r.GetY());
      break;
    case 3:
      interacted = zoo_ref.AccessCell(r.GetX()-1,r.GetY());
      break;
    case 4:
      interacted = zoo_ref.AccessCell(r.GetX(),r.GetY()-1);
      break;
  }
  if (strcmp(interacted->GetType(),"Exit") == 0) {
    out = -1;
  } else
  if (strcmp(interacted->GetType(),"LandHabitat") == 0) {
    out = 1;
  } else
  if (strcmp(interacted->GetType(),"WaterHabitat") == 0) {
    out = 2;
  } else
  if (strcmp(interacted->GetType(),"AirHabitat") == 0) {
    out = 3;
  } else
  if (strcmp(interacted->GetType(),"Restaurant") == 0) {
    out = 4;
  } else
  if (strcmp(interacted->GetType(),"Park") == 0) {
    out = 5;
  } else {
    out = 0;
  }
  if (out != -1)
    cout << "On the "<< directions[dir-1] << "ern side, there is ";
    switch (out) {
      case 0:
          cout << "nothing, Ladies and Gentlemen!" << endl;
        break;
      case 1:
          cout << "a wide land habitat for land animals!" << endl;
          cout << "Let's hear them sing!" << endl;
          InteractHabitat(interacted);
        break;
      case 2:
          cout << "an enormous water habitat for fish and water mammals!" << endl;
          cout << "Let's listen to them swim!" << endl;
          InteractHabitat(interacted);
        break;
      case 3:
          cout << "a wide air habitat for birds!" << endl;
          cout << "Let's see them dance!" << endl;
          InteractHabitat(interacted);
        break;
      case 4:
          cout << "a Restaurant, for y'all who are hungry right now!" << endl;
        break;
      case 5:
          cout << "a Park, fresh and green, Ladies and Gentlemen!" << endl;
        break;
    }
  return out;
}

void Tour::InteractHabitat(Cell* c){
  Cage** cageArray = zoo_ref.GetCages();
  int indeks=zoo_ref.GetIndexCage(c->GetX(),c->GetY());
  if(indeks<zoo_ref.GetNCages()){
    Cage* cage = cageArray[zoo_ref.GetIndexCage(c->GetX(),c->GetY())];
    Animal** a = cage->GetAnimals();
    int animalNum = cage->GetNAnimal();
    for(int i = 0;i < animalNum;i++){
      cout << a[i]->GetGenus() << " " << a[i]->GetSpecies() << " : "<< a[i]->Interact() << endl;
    }
  }
}

void Tour::RestartRoute(){
  route_pointer = 0;
}

void Tour::TraceRoute(){
  route_pointer++;
  cout << "The tour continues ..." << "current position : (" << route[route_pointer].GetX() << "," << route[route_pointer].GetY() << ")"<< endl << endl;
  if (route_pointer == route_distance-1) {
    cout << "\t Now here is the Exit! Thank you for your visit Lady and Madam" << endl;
  } else {
    if (route[route_pointer].GetX() > 0) InteractAroundRoute(route[route_pointer],1);
    InteractAroundRoute(route[route_pointer],2);
    InteractAroundRoute(route[route_pointer],3);
    InteractAroundRoute(route[route_pointer],4);
  }
  cout << endl;
}
int Tour::GetRouteDistance()
{
  return route_distance;
}
int Tour::GetRoutePointer()
{
  return route_pointer;
}
void Tour::TraceWholeRoute(){
  while(route_pointer < route_distance-1)
    TraceRoute();
}

void Tour::PrintRoute(){
  for(int i = 0;i < route_distance;i++)
    cout << route[i].GetX() << "," << route[i].GetY() << endl;
}
