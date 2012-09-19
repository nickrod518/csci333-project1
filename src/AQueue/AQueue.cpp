#include "AQueue.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

AQueue::Queue(int initialSize) {
  if (initialCapacity != 0)
    initialCapacity = initialSize;

  theQueue = new int[initialSize];
  front, back, numElements = 0;
  capacity = initialSize;
}

AQueue::~Queue() {
  delete[] theQueue;
}

void AQueue::enqueue(int value) {
  if (numElements == capacity) {
    capacity = capacity*2
    int* newQueue = new int[capacity];
    memcpy(newQueue, theQueue, numElements);
    delete[] theQueue;
    theQueue = newQueue;
  }
  assert(numElements != capacity);

  if (numElements <= capacity/4 && capacity/2 > initialCapacity) {
    capacity = capacity/2
    int* newQueue = new int[capacity];
    memcpy(newQueue, theQueue, numElements);
    delete[] theQueue;
    theQueue = newQueue;
  }
  assert(numElements <= capacity/2);
  assert(capacity >= initialCapacity);

  back = (back + 1) % capacity;
  theQueue[back] = value;
  numElements++;
}

int AQueue::dequeue() {
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
