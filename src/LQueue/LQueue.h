#ifndef __LQUEUE_H__
#define __LQUEUE_H__

#include "Node.h"

class LQueue {
 private:
  Node* front;
  Node* back;
  int numElements;

 public:
  LQueue();
  ~LQueue();
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};

#endif
