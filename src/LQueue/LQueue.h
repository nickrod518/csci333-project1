#ifndef __LQUEUE_H__
#define __LQUEUE_H__

class LQueue {
 private:
  int* theQueue;
  int front;
  int back;
  int numElements;
  int capacity;

 public:
  LQueue(int initialSize = 10);
  ~LQueue(); //destructor
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};

#endif
