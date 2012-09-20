#include "LQueue.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

LQueue::LQueue(int initialSize) {
  theQueue = new int[initialSize];
  capacity = initialSize;
}

LQueue::~LQueue() {
  delete[] theQueue;
}
