//path_struct.h
#include <iostream>

//struct for Pathfinding
typedef struct path_s {
  int x;
  int y;
  int counter;
  } Path;
  
bool operator==(const Path& lhs, const Path& rhs)
  {
    return ((lhs.x == rhs.x) && (lhs.y == rhs.y) && (lhs.counter == rhs.counter));
  }
  
std::ostream& operator<< (std::ostream& stream, const Path p) {
  stream << "{" << p.x << "," << p.y << "," << p.counter << "}";
  return stream;
}

bool operator> (const Path& lhs, const Path& rhs){
  return lhs.counter > rhs.counter;
}

bool operator< (const Path& lhs, const Path& rhs){
  return lhs.counter < rhs.counter;
}
