#include "VQueue.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

VQueue::VQueue(int initialSize) {
  theQueue = new int[initialSize];
  capacity = initialSize;
}

VQueue::~VQueue() {
  delete[] theQueue;
}
