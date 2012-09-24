#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/LQueue/LQueue.h"
#include "../src/VQueue/VQueue.h"

TEST(AQueueTest, Initialize) {
  AQueue* q = new AQueue();

  EXPECT_EQ(0, q->size());
  EXPECT_EQ(1, q->isEmpty());
  delete q;
}

TEST(AQueueTest, Enqueue) {
  AQueue* q = new AQueue();
  q->enqueue(5);

  EXPECT_EQ(0, q->isEmpty());
  EXPECT_EQ(1, q->size());
  EXPECT_EQ(5, q->dequeue());
  delete q;
}

TEST(AQueueTest, Dequeue) {
  AQueue* q = new AQueue();
  q->enqueue(5);
  q->enqueue(10);
  q->enqueue(15);

  EXPECT_EQ(5, q->dequeue());
  EXPECT_EQ(10, q->dequeue());
  EXPECT_EQ(15, q->dequeue());
  delete q;
}

TEST(AQueueTest, Size) {
  AQueue* q = new AQueue();
  
  EXPECT_EQ(0, q->size());

  q->enqueue(5);
  q->enqueue(10);
  q->enqueue(15);

  EXPECT_EQ(3, q->size());

  q->dequeue();

  EXPECT_EQ(2, q->size());

  delete q;
}

TEST(AQueueTest, IsEmpty) {
  AQueue* q = new AQueue();
  
  EXPECT_EQ(1, q->isEmpty());

  q->enqueue(1);

  EXPECT_EQ(0, q->isEmpty());
  delete q;
}

TEST(LQueueTest, Initialize) {
  LQueue q = LQueue();

  EXPECT_EQ(0, q.size());
  EXPECT_EQ(1, q.isEmpty());
}

TEST(LQueueTest, Enqueue) {
  LQueue q = LQueue();
  q.enqueue(5);

  EXPECT_EQ(0, q.isEmpty());
  EXPECT_EQ(1, q.size());
  EXPECT_EQ(5, q.dequeue());
}

TEST(LQueueTest, Dequeue) {
  LQueue q = LQueue();
  q.enqueue(5);
  q.enqueue(10);
  q.enqueue(15);

  EXPECT_EQ(5, q.dequeue());
  EXPECT_EQ(10, q.dequeue());
  EXPECT_EQ(15, q.dequeue());
}

TEST(LQueueTest, Size) {
  LQueue q = LQueue();
  
  EXPECT_EQ(0, q.size());

  q.enqueue(5);
  q.enqueue(10);
  q.enqueue(15);

  EXPECT_EQ(3, q.size());

  q.dequeue();

  EXPECT_EQ(2, q.size());
}

TEST(LQueueTest, IsEmpty) {
  LQueue q = LQueue();
  
  EXPECT_EQ(1, q.isEmpty());

  q.enqueue(1);

  EXPECT_EQ(0, q.isEmpty());
}

TEST(VQueueTest, Initialize) {
  VQueue* q = new VQueue();

  EXPECT_EQ(0, q->size());
  EXPECT_EQ(1, q->isEmpty());
  delete q;
}

TEST(VQueueTest, Enqueue) {
  VQueue* q = new VQueue();
  q->enqueue(5);

  EXPECT_EQ(0, q->isEmpty());
  EXPECT_EQ(1, q->size());
  EXPECT_EQ(5, q->dequeue());
  delete q;
}

TEST(VQueueTest, Dequeue) {
  VQueue* q = new VQueue();
  q->enqueue(5);
  q->enqueue(10);
  q->enqueue(15);

  EXPECT_EQ(5, q->dequeue());
  EXPECT_EQ(10, q->dequeue());
  EXPECT_EQ(15, q->dequeue());
  delete q;
}

TEST(VQueueTest, Size) {
  VQueue* q = new VQueue();
  
  EXPECT_EQ(0, q->size());

  q->enqueue(5);
  q->enqueue(10);
  q->enqueue(15);

  EXPECT_EQ(3, q->size());

  q->dequeue();

  EXPECT_EQ(2, q->size());

  delete q;
}

TEST(VQueueTest, IsEmpty) {
  VQueue* q = new VQueue();
  
  EXPECT_EQ(1, q->isEmpty());

  q->enqueue(1);

  EXPECT_EQ(0, q->isEmpty());
  delete q;
}
