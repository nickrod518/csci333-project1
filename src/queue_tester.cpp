#include "AQueue/AQueue.h"
#include "LQueue/LQueue.h"
#include "VQueue/VQueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {

  // AQueue testing
  cout << "begin AQueue testing" << endl;

  AQueue* aQueue = new AQueue(5);
  aQueue->enqueue(1);
  cout << "empty?" << aQueue->isEmpty() << endl;
  aQueue->enqueue(2);
  aQueue->enqueue(3);

  cout << aQueue->dequeue() << endl;
  cout << aQueue->dequeue() << endl;
  cout << aQueue->dequeue() << endl;
  cout << "empty?" << aQueue->isEmpty() << endl;

  delete[] aQueue;
  
  cout << "end AQueue testing" << endl;


  // LQueue testing
  cout << "begin LQueue testing" << endl;

  LQueue lQueue = LQueue();
  lQueue.enqueue(1);
  cout << "empty?" << lQueue.isEmpty() << endl;
  lQueue.enqueue(2);
  lQueue.enqueue(3);

  cout << lQueue.dequeue() << endl;
  cout << lQueue.dequeue() << endl;
  cout << lQueue.dequeue() << endl;
  cout << "empty?" << lQueue.isEmpty() << endl;

  cout << "end LQueue testing" << endl;

  // VQueue testing
  cout << "begin VQueue testing" << endl;

  VQueue* vQueue = new VQueue();
  vQueue->enqueue(1);
  cout << "empty?" << vQueue->isEmpty() << endl;
  vQueue->enqueue(2);
  vQueue->enqueue(3);

  cout << vQueue->dequeue() << endl;
  cout << vQueue->dequeue() << endl;
  cout << vQueue->dequeue() << endl;
  cout << "empty?" << vQueue->isEmpty() << endl;

  delete vQueue;
  
  cout << "end AQueue testing" << endl;


  return 0;
}
