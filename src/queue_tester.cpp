#include "AQueue/AQueue.h"
#include "LQueue/LQueue.h"
#include "VQueue/VQueue.h"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main() {
  int start, end, elapsed;
  double seconds;


  // AQueue testing
  start = clock();
  cout << "Begin AQueue testing..." << endl;

  AQueue* aQueue = new AQueue();
  for (int i = 0; i < 10000; ++i)
    aQueue->enqueue(i);
  cout << "Size after enqueueing 10000: " << aQueue->size() << endl;

  for (int i = 0; i < 5000; ++i)
    aQueue->dequeue();
  cout << "Size after dequeueing 5000: " << aQueue->size() << endl;
  cout << "Is it empty yet? " << aQueue->isEmpty() << endl;

  for (int i = 0; i < 2000; ++i)
    aQueue->enqueue(i);
  cout << "Size after enqueueing 2000 more: " << aQueue->size() << endl;
  cout << "Is it empty yet? " << aQueue->isEmpty() << endl;

  for (int i = 0; i < 7000; ++i)
    aQueue->dequeue();
  cout << "Size after dequeueing the remaining 7000: " << aQueue->size() << endl;
  cout << "Is it empty yet? " << aQueue->isEmpty() << endl;

  delete aQueue;
  
  cout << "...end AQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "elapsed time: " << seconds << " seconds " << endl;
  cout << endl;


  // LQueue testing
  start = clock();
  cout << "Begin LQueue testing..." << endl;

  LQueue lQueue = LQueue();
  for (int i = 0; i < 10000; ++i)
    lQueue.enqueue(i);
  cout << "Size after enqueueing 10000: " << lQueue.size() << endl;

  for (int i = 0; i < 5000; ++i)
    lQueue.dequeue();
  cout << "Size after dequeueing 5000: " << lQueue.size() << endl;
  cout << "Is it empty yet? " << lQueue.isEmpty() << endl;

  for (int i = 0; i < 2000; ++i)
    lQueue.enqueue(i);
  cout << "Size after enqueueing 2000 more: " << lQueue.size() << endl;
  cout << "Is it empty yet? " << lQueue.isEmpty() << endl;

  for (int i = 0; i < 7000; ++i)
    lQueue.dequeue();
  cout << "Size after dequeueing the remaining 7000: " << lQueue->size() << endl;
  cout << "Is it empty yet? " << aQueue->isEmpty() << endl;

  cout << "...end LQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "elapsed time: " << seconds << " seconds " << endl;
  cout << endl;


  // VQueue testing
  start = clock();
  cout << "Begin VQueue testing..." << endl;

  VQueue* vQueue = new VQueue();
  for (int i = 0; i < 10000; ++i)
    vQueue->enqueue(i);
  cout << "Size after enqueueing 10000: " << vQueue->size() << endl;

  for (int i = 0; i < 5000; ++i)
    vQueue->dequeue();
  cout << "Size after dequeueing 5000: " << vQueue->size() << endl;
  cout << "Is it empty yet? " << vQueue->isEmpty() << endl;

  for (int i = 0; i < 2000; ++i)
    vQueue->enqueue(i);
  cout << "Size after enqueueing 2000 more: " << vQueue->size() << endl;
  cout << "Is it empty yet? " << vQueue->isEmpty() << endl;

  for (int i = 0; i < 7000; ++i)
    vQueue->dequeue();
  cout << "Size after dequeueing the remaining 7000: " << vQueue->size() << endl;
  cout << "Is it empty yet? " << vQueue->isEmpty() << endl;

  delete vQueue;
  
  cout << "...end VQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "elapsed time: " << seconds << " seconds " << endl;
 
  return 0;
}
