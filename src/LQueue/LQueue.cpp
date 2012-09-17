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
