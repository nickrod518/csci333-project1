#include "AQueue/AQueue.h"
#include "LQueue/LQueue.h"
#include "VQueue/VQueue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  AQueue* aQueue = new AQueue(5);
  aQueue->enqueue(1);
  cout << "empty?" << aQueue->isEmpty() << endl;
  aQueue->enqueue(2);
  aQueue->enqueue(3);

  cout << aQueue->dequeue() << endl;
  cout << aQueue->dequeue() << endl;
  cout << aQueue->dequeue() << endl;
  cout << "empty?" << aQueue->isEmpty() << endl;

  delete aQueue;

  return 0;
}
