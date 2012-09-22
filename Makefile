BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
AQ = ./src/AQueue
LQ = ./src/LQueue
VQ = ./src/VQueue
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
OBJECTS = $(AQ)/AQueue.o $(LQ)/LQueue.o $(VQ)/VQueue.o $(LQ)/Node.o
IMPLEMENTATIONS = $(AQ)/AQueue.cpp $(LQ)/LQueue.cpp $(VQ)/VQueue.cpp $(LQ)/Node.cpp
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(OBJECTS) $(IMPLEMENTATIONS)
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main $(SRC)/queue_tester.cpp $(OBJECTS)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(OBJECTS) $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o $(TEST)/queue_test $(TEST)/Queue.cpp $(OBJECTS) $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

AQueue.o: $(AQ)/AQueue.h $(AQ)/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(AQ)/AQueue.cpp

LQueue.o: $(LQ)/LQueue.h $(LQ)/LQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LQ)/LQueue.cpp

VQueue.o: $(VQ)/VQueue.h $(VQ)/VQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(VQ)/VQueue.cpp

Node.o: $(LQ)/Node.h $(LQ)/Node.cpp
	$(CPP) $(CPPFLAGS) -c $(LQ)/Node.cpp

clean:
	rm -rf $(SRC)/*.o
	rm -rf *~
	rm -f $(BUILD)/main
	rm -f $(TEST)/queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; make clean
