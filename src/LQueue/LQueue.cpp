#include "LQueue.h"
#include "Node.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

LQueue::LQueue() {
  numElements = 0;
  front = 0;
  back = 0;
}

LQueue::~LQueue() {
  //keep dequeueing until empty
  while (!isEmpty())
    dequeue();
}

void LQueue::enqueue(int value) {
  //create new node
  Node* temp = new Node(value);
  //point back to new node
  back->setNext(temp);
  //temp is now back
  back = temp;
  //increment numElements
  numElements++;
  //if this is the first element, it is the front and back
  if (front == 0)
    front = back;
  assert(!isEmpty());
}

int LQueue::dequeue() {
  //make sure queue isn't empty
  assert(!isEmpty());
  //create new node pointing to front
  Node* temp = front;
  //store value of front
  int result = temp->getValue();
  //front is now the node after front
  front = temp->getNext();
  //delete temp node
  delete temp;
  //decrement numElements
  numElements--;
  //return value of old front
  return result;
}

int LQueue::size() {
  return numElements;
}

bool LQueue::isEmpty() {
  return !numElements;
}
