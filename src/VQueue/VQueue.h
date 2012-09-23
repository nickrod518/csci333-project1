#ifndef __VQUEUE_H__
#define __VQUEUE_H__

#include <list>

using std::list;

class VQueue {
 private:
  list<int> theQueue;

 public:
  VQueue();
  ~VQueue();
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};

#endif
