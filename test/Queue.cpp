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

TEST(AQueueTest, IsEmpty) {
  AQueue* q = new AQueue();
  
  EXPECT_EQ(1, q->isEmpty());

  q->enqueue(1);

  EXPECT_EQ(0, q->isEmpty());
  delete q;
}
