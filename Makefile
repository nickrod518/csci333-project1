BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
AQ = ./src/AQueue
LQ = ./src/LQueue
VQ = ./src/VQueue
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
OBJECTS = $(AQ)/AQueue.o $(LQ)/LQueue.o $(VQ)/VQueue.o
IMPLEMENTATIONS = $(AQ)/AQueue.cpp $(LQ)/LQueue.cpp $(VQ)/VQueue.cpp
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(OBJECTS) $(IMPLEMENTATIONS)
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main $(OBJECTS) $(IMPLEMENTATIONS)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(OBJECTS)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test $(OBJECTS) $(IMPLEMENTATIONS) $(GTEST_MAINA)

$(GTEST_MAINA: $(GTEST)/src/*.cc $(GTEST)/src/*.h

AQueue.o: $(AQ)/AQueue.h $(AQ)/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(AQ)/AQueue.cpp

LQueue.o: $(LQ)/LQueue.h $(LQ)/LQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LQ)/LQueue.cpp

VQueue.o: $(VQ)/VQueue.h $(VQ)/VQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(VQ)/VQueue.cpp

clean:
	rm -rf $(SRC)/*.o
	rm -f $(BUILD)/*.o
	rm -rf *~
	rm -f $(BUILD)/main
	rm -f $(TEST)/queue_test
	rm -f $(GTEST_MAINA)
