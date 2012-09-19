#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
 private:
  int* theQueue;
  int front;
  int back;
  int size;
  int capacity;
  int initialCapacity;

 public:
  AQueue(int initialSize = 10);
  ~AQueue(); //destructor
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};

#endif
