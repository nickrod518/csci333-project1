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
  for (int i = 0; i < 1000; ++i)
    aQueue->enqueue(i);
  cout << "Size after enqueueing 1000: " << aQueue->size() << endl;

  for (int i = 0; i < 500; ++i)
    aQueue->dequeue();
  cout << "Size after dequeueing 500: " << aQueue->size() << endl;
  cout << "Is it empty yet? " << aQueue->isEmpty() << endl;

  for (int i = 0; i < 200; ++i)
    aQueue->enqueue(i);
  cout << "Size after enqueueing 200 more: " << aQueue->size() << endl;
  cout << "Is it empty yet? " << aQueue->isEmpty() << endl;

  for (int i = 0; i < 700; ++i)
    aQueue->dequeue();
  cout << "Size after dequeueing the remaining 700: " << aQueue->size() << endl;
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
  for (int i = 0; i < 1000; ++i)
    lQueue.enqueue(i);
  cout << "Size after enqueueing 1000: " << lQueue.size() << endl;

  for (int i = 0; i < 500; ++i)
    lQueue.dequeue();
  cout << "Size after dequeueing 500: " << lQueue.size() << endl;
  cout << "Is it empty yet? " << lQueue.isEmpty() << endl;

  for (int i = 0; i < 200; ++i)
    lQueue.enqueue(i);
  cout << "Size after enqueueing 200 more: " << lQueue.size() << endl;
  cout << "Is it empty yet? " << lQueue.isEmpty() << endl;

  for (int i = 0; i < 700; ++i)
    lQueue.dequeue();
  cout << "Size after dequeueing the remaining 700: " << aQueue->size() << endl;
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
  for (int i = 0; i < 1000; ++i)
    vQueue->enqueue(i);
  cout << "Size after enqueueing 1000: " << vQueue->size() << endl;

  for (int i = 0; i < 500; ++i)
    vQueue->dequeue();
  cout << "Size after dequeueing 500: " << vQueue->size() << endl;
  cout << "Is it empty yet? " << vQueue->isEmpty() << endl;

  for (int i = 0; i < 200; ++i)
    vQueue->enqueue(i);
  cout << "Size after enqueueing 200 more: " << vQueue->size() << endl;
  cout << "Is it empty yet? " << vQueue->isEmpty() << endl;

  for (int i = 0; i < 700; ++i)
    vQueue->dequeue();
  cout << "Size after dequeueing the remaining 700: " << vQueue->size() << endl;
  cout << "Is it empty yet? " << vQueue->isEmpty() << endl;

  delete vQueue;
  
  cout << "...end VQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "elapsed time: " << seconds << " seconds " << endl;
 
  return 0;
}
