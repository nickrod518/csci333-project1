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
  for (int j = 0; j < 10000; ++j) {
    for (int i = 0; i < 10000; ++i)
      aQueue->enqueue(i);

    for (int i = 0; i < 10000; ++i)
      aQueue->dequeue();
  }
  delete aQueue;
  
  cout << "...end AQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "Elapsed time: " << seconds << " seconds " << endl;
  cout << endl;


  // LQueue testing
  start = clock();
  cout << "Begin LQueue testing..." << endl;

  LQueue lQueue = LQueue();
  for (int j = 0; j < 10000; ++j) {
    for (int i = 0; i < 10000; ++i)
      lQueue.enqueue(i);

    for (int i = 0; i < 10000; ++i)
      lQueue.dequeue();
  }

  cout << "...end LQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "Elapsed time: " << seconds << " seconds " << endl;
  cout << endl;


  // VQueue testing
  start = clock();
  cout << "Begin VQueue testing..." << endl;

  VQueue* vQueue = new VQueue();
  for (int j = 0; j < 10000; ++j) {
    for (int i = 0; i < 10000; ++i)
      vQueue->enqueue(i);

    for (int i = 0; i < 10000; ++i)
      vQueue->dequeue();
  }
  delete vQueue;

  cout << "...end VQueue testing." << endl;
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "Elapsed time: " << seconds << " seconds " << endl;
 
  return 0;
}
