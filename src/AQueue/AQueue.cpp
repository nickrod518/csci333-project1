#include "AQueue.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

AQueue::AQueue(int initialSize) {
  theQueue = new int[initialSize];
  front, back, size = 0;
  capacity = initialSize;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int value) {
  if (size == capacity) {
    capacity = capacity*2
    int* newQueue = new int[capacity];
    memcpy(newQueue, theQueue, size);
    delete[] theQueue;
    theQueue = newQueue;
  }
  assert(size != capacity);

  if (size <= capacity/4 && capacity/2 > initialCapacity) {
    capacity = capacity/2
    int* newQueue = new int[capacity];
    memcpy(newQueue, theQueue, size);
    delete[] theQueue;
    theQueue = newQueue;
  }
  assert(size <= capacity/2);
  assert(capacity >= initialCapacity);

  back = (back + 1) % capacity;
  theQueue[back] = value;
  size++;  
}

int AQueue::dequeue() {
  int result = theQueue[front];
  front = (front + 1) % capacity;
  size--;
  return result;
}

int AQueue::size() {
  return size;
}

bool isEmpty() {
  return !size;
}
