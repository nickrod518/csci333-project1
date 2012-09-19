BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
AQ = ./src/AQueue
LQ = ./src/LQueue
VQ = ./src/VQueue

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/stack_test

$(BUILD)/main: $(SRC)/Stack.cpp $(SRC)/Stack.o
	cd $(SRC); $(MAKE)

$(TEST)/stack_test: $(TEST)/Stack.cpp $(SRC)/Stack.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

