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
  while (!isEmpty()) //keep dequeueing until empty
    dequeue();
}

void LQueue::enqueue(int value) {
  Node* temp = new Node(value); //create new node
  if (front == 0) { //if front is null, this is the first element
    front = temp;
    back = temp;
  }
  else {
    back->setNext(temp); //point back to new node
    back = temp; //temp is now back
  }
  numElements++; //increment numElements
}

int LQueue::dequeue() {
  assert(!isEmpty()); //make sure queue isn't empty
  Node* temp = front; //create new node pointing to front
  int result = temp->getValue(); //store value of front
  front = temp->getNext(); //front is now the node after front
  delete temp; //delete temp node
  if (numElements == 1) { //if this is the last element
    front = 0;
    back = 0;
  }
  numElements--; //decrement numElements
  return result; //return value of old front
}

int LQueue::size() {
  return numElements;
}

bool LQueue::isEmpty() {
  return !numElements;
}
