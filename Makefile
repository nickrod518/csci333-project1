BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
AQ = ./src/AQueue
LQ = ./src/LQueue
VQ = ./src/VQueue
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(AQ)/AQueue.cpp $(AQ)/AQueue.o $(LQ)/AQueue.cpp $(LQ)/AQueue.o $(VQ)/AQueue.cpp $(VQ)/AQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main AQueue.cpp AQueue.o LQueue.cpp LQueue.o VQueue.cpp VQueue.o

$(TEST)/queue_test: $(TEST)/Queue.cpp $(AQ)/AQueue.o $(LQ)/AQueue.o $(VQ)/AQueue.o
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test AQueue.cpp AQueue.o LQueue.cpp LQueue.o VQueue.cpp VQueue.o $(GTEST_MAINA)

$(GTEST_MAINA: $(GTEST)/src/*.cc $(GTEST)/src/*.h

clean:
	rm -rf $(SRC)/*.o
	rm -f $(BUILD)/*.o
	rm -rf *~
	rm -f $(BUILD)/main
	rm -f $(TEST)/queue_test
	rm -f $(GTEST_MAINA)
