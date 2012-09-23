#include "VQueue.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <list>

using std::list;

VQueue::VQueue() {
  list<int> theQueue;
}

VQueue::~VQueue() {
}

void VQueue::enqueue(int value) {
  theQueue.push_back(value);
}

int VQueue::dequeue() {
  int result = theQueue.front();
  theQueue.pop_front();
  return result;
}

int VQueue::size() {
  return theQueue.size();
}

bool VQueue::isEmpty() {
  return theQueue.empty();
}
