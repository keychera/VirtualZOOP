#include <iostream>
using namespace std;

#define QDEFSIZE 100

//a circular queue
/**
 * @class	Queue
 * @brief	class generic of queue
 */
template <class T>
class Queue{
  public:
    Queue(){
      queue = new T [QDEFSIZE];
      size = QDEFSIZE;
      head = -1;
      tail = -1;
    }
    
    Queue(int x){
      queue = new T [x];
      size = x;
      head = -1;
      tail = -1;
    }
    
    Queue(int x,T initval){
      queue = new T [x];
      size = x;
      for (int i = 0;i < size;i++)
        queue[i] = initval;
      head = -1;
      tail = -1;
    }
    
    Queue(const Queue& q){
      queue = new T [q.size];
      size = q.size;
      for (int i = 0;i < size;i++)
        queue[i] = q.queue[i];
      head = q.head;
      tail = q.tail;
    }
    
    Queue& operator = (const Queue& q){
      delete [] queue;
      queue = new T [q.size];
      size = q.size;
      for (int i = 0;i < size;i++)
        queue[i] = q.queue[i];
      head = q.head;
      tail = q.tail;
    }
    
    ~Queue(){
      delete [] queue;
    }
    
    int ElementCount(){
      if (head < 0)
        return 0;
      else {
        if (head == tail)
          return 1;
        else
          return (tail > head)?
              (tail - head + 1) : (size - head + tail + 1);
      }
    }
    
    void Enqueue(T in){
      if (head < 0) head++;
      tail++;
      tail = (tail < size)? tail : 0;
      queue[tail] = in;
    }
    
    T Dequeue(){
      T out = queue[head];
      int initNum = ElementCount();
      head++;
      head = (head < size)? head : 0;
      if (initNum == 1){
        head = -1;
        tail = -1;
      }
      return out;
    }
    
    T Peek(int i){
      int peek = head + i;
      peek = (peek < size)? peek : peek - size;
      return queue[peek];
    }
    
    T PeekHead(){
      return queue[head];
    }
    
    T PeekTail(){
      return queue[tail];
    }
    
    int IdxSearch(T key){
      int i = -1;
      if (head >= 0) {
        i = 0;
        bool found = false;
        int num = ElementCount();
        while ((i < num) && !found){
          int check = head + i;
          check = (check < size)? check : check - size;
          found = (Peek(check) == key);
          if (!found) i++;
        }
        if (!found)
          i = -1;
      }
      return i;
    }
    
    
    void PrintQueue(){
      cout << "head " << head << endl;
      cout << "tail " << tail << endl;
      if (head >= 0) {
        int num = ElementCount();
        for (int i = 0;i < num;i++) {
          int check = head + i;
          check = (check < size)? check : check - size;
          cout << i << " " << queue[check] << endl;
        }
      }
    }
  
  private:
    T* queue;
    int head;
    int tail;
    int size;
};
