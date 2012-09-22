#include "Node.h"

Node::Node(int v) {
  value = v;
  next = 0;
}

Node::~Node() {
}

int Node::getValue() {
  return value;
}

Node* Node::getNext() {
  return next;
}

void setNext(Node* &n) {
  next = n;
}
