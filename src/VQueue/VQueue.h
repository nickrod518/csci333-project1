#ifndef __VQUEUE_H__
#define __VQUEUE_H__

class VQueue {
 private:
  int* theQueue;
  int front;
  int back;
  int numElements;
  int capacity;

 public:
  VQueue(int initialSize = 10);
  ~VQueue(); //destructor
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};

#endif
