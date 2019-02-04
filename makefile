#Author:	Jacob Butch
#Date:		28 Janurary 2019

CXXFLAGS= -c -Wall 
CXX 	= g++
RM 	= rm -f
TARGET 	= prog1
SRC 	= ./src/
BIN	= bin

all: main

main: main.o stringChange.o
	$(CXX) stringChange.o main.o -o $(TARGET)
	mv *.o $(BIN)

stringChange.o: $(SRC)stringChange.cc 
	$(CXX) $(CXXFLAGS) $(SRC)stringChange.cc 

main.o: $(SRC)main.cc
	$(CXX) $(CXXFLAGS) $(SRC)main.cc

clean: 
	$(RM) $(BIN)/*.o $(TARGET)
