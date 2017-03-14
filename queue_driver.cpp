//queue driver
#include "queue.h"

int main (int argc , char *argv[]) {
  cout << "test queue" << endl;
  Queue<int> test(10,0);
  for(int i = 1;i < argc;i++){
    int n = argv[i][0] - '0';
    test.Enqueue(n);
  }
  
  test.PrintQueue();
  
  cout << "element " << test.ElementCount() << endl;
  int dummy;
  
  dummy = test.Dequeue();
  
  dummy = test.Dequeue();
  
  dummy = test.Dequeue();
  
  dummy = test.Dequeue();
  
  dummy = test.Dequeue();
  
  dummy = test.Dequeue();
  for(int i = 1;i < 4;i++){
    int n = argv[i][0] - '0';
    test.Enqueue(n);
  }
  
  int isthere = test.IdxSearch(5);
  cout << "element " << test.ElementCount() << endl;
  cout << "\nand 5 is " << isthere << endl;
  test.PrintQueue();
  return 0;
}
