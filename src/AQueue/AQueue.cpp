#include "AQueue.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

AQueue::AQueue(int initialSize) {
//  if (initialCapacity != 0)
    initialCapacity = initialSize;

  front = 0;
  back = 0;
  numElements = 0;
  theQueue = new int[initialSize];
  capacity = initialSize;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int value) {
  if (numElements == capacity) {
    capacity = capacity*2;
    int* newQueue = new int[capacity];
    memcpy(newQueue, theQueue, numElements);
    delete[] theQueue;
    theQueue = newQueue;
  }
  assert(numElements != capacity);
/*
  if (numElements <= capacity/4 && capacity/2 > initialCapacity) {
    capacity = capacity/2;
    int* newQueue = new int[capacity];
    memcpy(newQueue, theQueue, numElements);
    delete[] theQueue;
    theQueue = newQueue;
  }
  assert(numElements <= capacity/2);
  assert(capacity >= initialCapacity);
*/
  theQueue[back] = value;
  back = (back + 1) % capacity;
  numElements++;
}

int AQueue::dequeue() {
  assert(!isEmpty());
  int result = theQueue[front];
  front = (front + 1) % capacity;
  numElements--;
  return result;
}

int AQueue::size() {
  return numElements;
}

bool AQueue::isEmpty() {
  return !numElements;
}
